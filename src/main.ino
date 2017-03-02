// **** INCLUDES *****
#include "arduino.h"
// Pro Mini
#if defined(__AVR_ATmega328P__) || defined(__AVR_ATmega168__)
  #include "LowPower.h"
#endif
//#if defined(ARDUINO_SAMD_ZERO)
  // Required for Serial on Zero based boards
//#endif

void setup()
{
  // No setup is required for this library

  Serial.begin(9600);
  delay(2000);
  #if defined(__AVR_ATmega328P__) || defined(__AVR_ATmega168__)
    Serial.println("Arduino Pro Mini");
  #endif
  #if defined(ARDUINO_SAMD_ZERO)
    // Required for Serial on Zero based boards
    Serial.println("Arduino M0");
  #endif

}

void loop()
{
  // Enter idle state for 8 s with the rest of peripherals turned off
  // Each microcontroller comes with different number of peripherals
  // Comment off line of code where necessary

goToSleep();

  // ATmega32U4
  //LowPower.idle(SLEEP_8S, ADC_OFF, TIMER4_OFF, TIMER3_OFF, TIMER1_OFF,
  //		  TIMER0_OFF, SPI_OFF, USART1_OFF, TWI_OFF, USB_OFF);

  // ATmega2560
  //LowPower.idle(SLEEP_8S, ADC_OFF, TIMER5_OFF, TIMER4_OFF, TIMER3_OFF,
  //		  TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF, USART3_OFF,
  //		  USART2_OFF, USART1_OFF, USART0_OFF, TWI_OFF);

  // ATmega256RFR2
  //LowPower.idle(SLEEP_8S, ADC_OFF, TIMER5_OFF, TIMER4_OFF, TIMER3_OFF,
  //      TIMER2_OFF, TIMER1_OFF, TIMER0_OFF, SPI_OFF,
  //      USART1_OFF, USART0_OFF, TWI_OFF);

  // Do something here
  // Example: Read sensor, data logging, data transmission.
}
