module LedControllerM {
  provides interface LedController;
  uses
  {
    interface Leds;
    interface Timer<TMilli> as LedTimer0;
    interface Timer<TMilli> as LedTimer1;
    interface Timer<TMilli> as LedTimer2;

    interface Timer<TMilli> as MorseTimer;

    interface Timer<TMilli> as CompleteTimer;
    interface LCDSetter;
  }
}

implementation {
  #define MORSE_WPM 12 /* speed, in words per minute */
  #define MORSE_UNIT ( 1200 / MORSE_WPM ) /* milliseconds per unit */
  #define MAX_DIGIT 2

  //******Inner Functions******
  void setDigit(uint8_t mask);
  void _setNumber(uint8_t num);
  void clearDigit();

  //******Morse Module*********
  command void LedController.test(){
    call LedController.setNumber(45);
  }

  static uint8_t isCleared = 0;
  static uint8_t CompleteTimerIterator = 0;
  event void CompleteTimer.fired()
  {
    if(isCleared==0) setDigit(7);
    else
    {
      CompleteTimerIterator--;
      clearDigit();
    }

    if(CompleteTimerIterator > 0)
    {
      call CompleteTimer.startOneShot(MORSE_UNIT);
    }
  }

  uint8_t currentMorseNumber[MAX_DIGIT];
  uint8_t currentMorseIndex = 0;

  void _setNumber(uint8_t num){
    if(num>10) _setNumber(num/10);
    currentMorseNumber[currentMorseIndex] = num % 10;
    currentMorseNumber[currentMorseIndex] = num % 10;
    currentMorseIndex++;
  }

  command void LedController.setNumber(uint8_t num){
    _setNumber(num);
    currentMorseIndex = 0;
    setDigit(currentMorseIndex);
    call MorseTimer.startOneShot(1000);
  }

  event void MorseTimer.fired()
    {
    const static char morseCode[][10] = {
    "----- ", //0
    ".---- ", //1
    "..--- ", //2
    "...-- ", //3
    "....- ", //4
    "..... ", //5
    "-.... ", //6
    "--... ", //7
    "---.. ", //8
    "----. ", //9
    };
    const static char *current;
    uint8_t currentCodeIndex = currentMorseNumber[currentMorseIndex];

    if (currentMorseIndex >= MAX_DIGIT){
    CompleteTimerIterator = 4;
    call CompleteTimer.startOneShot(1000);
    return;
    }

    if( !current )
    current = morseCode[currentCodeIndex];

    switch( *current ) {
      case ' ': /* pause: off for two units */
        call MorseTimer.startOneShot( 2 * MORSE_UNIT );
        current++;
        break;

      case '.': /* dot: on for one unit, off for one unit */
        if( (call Leds.get()&LEDS_LED0) ) {
          call Leds.led0On();
          call MorseTimer.startOneShot( MORSE_UNIT );
        }
        else {
          call Leds.led0Off();
          call MorseTimer.startOneShot( MORSE_UNIT );
          current++;
        }
        break;

      case '-': /* dash: on for three units, off for one unit */
        if( (call Leds.get()&LEDS_LED0) ) {							
          //when the value in 'if' is 1, leds was turn off while it was turn on.
          call Leds.led0On();
          call MorseTimer.startOneShot( 3 * MORSE_UNIT );
        }
        else {
          call Leds.led0Off();
          call MorseTimer.startOneShot( MORSE_UNIT );
          current++;
        }
        break;

      default: /* illegal character: ignore */
        break;
    }

    /* wrap around string if end reached */
    if( !*current )
    {
      currentMorseIndex++;
      setDigit(currentMorseIndex);
      current = morseCode[currentMorseIndex];
      call MorseTimer.startOneShot(MORSE_UNIT);
    }
    return;
  }



  ///////////////Blinks
  command void LedController.BlinkLed0(){
    call Leds.led0On();
    call LedTimer0.startOneShot(MORSE_UNIT);
  }
  command void LedController.BlinkLed1(){
    call Leds.led1On();
    call LedTimer1.startOneShot(MORSE_UNIT);
  }
  command void LedController.BlinkLed2(){
    call Leds.led2On();
    call LedTimer2.startOneShot(MORSE_UNIT);
  }

  void setDigit(uint8_t mask){
    if(mask & 2) call Leds.led1On();
    else call Leds.led1Off();
    if(mask & 1) call Leds.led2On();
    else call Leds.led2Off();
  }
  void clearDigit(){
    call Leds.led0Off();
    call Leds.led1Off();
    call Leds.led2Off();
  }

  event void LedTimer0.fired(){
    call Leds.led0Off();
  }
  event void LedTimer1.fired(){
    call Leds.led1Off();
  }
  event void LedTimer2.fired(){
    call Leds.led2Off();
  }  
}
