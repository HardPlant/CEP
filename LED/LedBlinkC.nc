configuration LedsC {
  provides interface Leds;
}
implementation {
  components LedsC;

  LedsC.Leds -> LedsC;
}
