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
  #define MORSE_WPM 6 /* speed, in words per minute */
  #define MORSE_UNIT ( 1200 / MORSE_WPM ) /* milliseconds per unit */
  #define MAX_DIGIT 2

  //******Function Prototypes******
  void setDigit(uint8_t mask);
  void _setNumber(uint8_t num);
  void clearDigit();

  //******Test Entry*********
  command void LedController.test(){
    call LCDSetter.init();
    call LedController.setNumber(45);
  }
  
//**** 모스 부호로 나타낼 수를 설정하는 변수.
  uint8_t currentMorseNumber[MAX_DIGIT];
  uint8_t currentMorseIndex = 0;

//**** 모드 부호로 표현할 변수.
uint8_t numToShow = 0;

  //******모듈 시작 함수. 전달받은 값을 모스 부호로 출력한다. (2자리까지 가능)
  command void LedController.setNumber(uint8_t num){
    if(num>100) return call LCDSetter.setLCD(100);
    
    numToShow = num;
    _setNumber(numToShow);
    currentMorseIndex = 0;
    setDigit(currentMorseIndex);
    call MorseTimer.startOneShot(1000);
  }


  //****완결 알림.
  static uint8_t isCleared = 0;
  
  //이 인자를 세트하고 CompleteTimer를 startOneShot()한다.
  static uint8_t CompleteTimerIterator = 0; 
  
  // 완결 타이머. 지정된 수만큼 모든 LED를 깜빡인다.
  // 이후, 
  event void CompleteTimer.fired()
  {
    if(isCleared==0)
    {
      setDigit(7);
      isCleared = 1;
    }
    else
    {
      isCleared = 0;
      CompleteTimerIterator--;
      clearDigit();
    }

    if(CompleteTimerIterator > 0)
    {
      call CompleteTimer.startOneShot(MORSE_UNIT*3);
    }
    else{ // 0이면 처음부터 다시 실행한다.
      signal LedController.reset();
    }
  }

//**** num 파서. 재귀적으로 큰 자리수부터 모스 부호로 나타내도록 한다.
  void _setNumber(uint8_t num){
    if(num>10) _setNumber(num/10);
    currentMorseNumber[currentMorseIndex] = num % 10;
    currentMorseNumber[currentMorseIndex] = num % 10;
    currentMorseIndex++;
  }
//**** MorseTimer. 
//* 내부적으로 상태를 가지며(current), 코드 파싱이 끝나면(*current=='\0')
//* currentMorseIndex를 증가시키며 배열을 읽는다.
//****
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
    uint8_t CodeIndex = currentMorseNumber[currentMorseIndex];

    if (currentMorseIndex >= MAX_DIGIT){
    CompleteTimerIterator = 4;
    call MorseTimer.stop();
    call CompleteTimer.startOneShot(1000);
    return;
    }

    if( !current )
    current = morseCode[CodeIndex];

    setDigit(MAX_DIGIT-currentMorseIndex);

    switch( *current ) {
      case ' ': /* pause */
        call MorseTimer.startOneShot( 12 * MORSE_UNIT );
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
      CodeIndex = currentMorseNumber[currentMorseIndex];
      current = morseCode[CodeIndex];
      call MorseTimer.startOneShot(MORSE_UNIT);
    }
    return;
  }



//**** Blinks
//* Led0,1,2를 깜빡이게 해 준다.
//****
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

//**** Digits
//* 2진수로 0~7까지의 범위를 나타낼 수 있다.
//****
  void setDigit(uint8_t mask){
    if(mask & 4) call Leds.led0On();
    else call Leds.led1Off();
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
  
//**** LedTimer Events
//* LedTimer 이벤트이다.
//****
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
