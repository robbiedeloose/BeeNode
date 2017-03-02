void goToSleep (){

  #if defined(__AVR_ATmega328P__) || defined(__AVR_ATmega168__)
    //Code in here will only be compiled if an Arduino Uno (or older) is used.
    // ATmega328P, ATmega168
    LowPower.idle(SLEEP_8S, ADC_OFF, TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART0_OFF, TWI_OFF);
  #endif

}
