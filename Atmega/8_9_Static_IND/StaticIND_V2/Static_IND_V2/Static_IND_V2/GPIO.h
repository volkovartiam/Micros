/*
 * GPIO.h
 *
 * Created: 31.05.2025 14:18:30
 *  Author: Artem
 */ 

#ifndef GPIO_H_
#define GPIO_H_

#include <avr/io.h>

//Ports
#define PB          1
#define PC          2
#define PD          3

//MODES
#define MODE_INPUT  0
#define MODE_OUTPUT 1

#define PULLUP      1
#define NOPULL      0

#define HIGH      1
#define LOW       0

#define PIN0_OUT    0x01	//or (1<<0)
#define PIN1_OUT    0x02	//or (1<<1)
#define PIN2_OUT    0x04	//or (1<<2)
#define PIN3_OUT    0x08	//or (1<<3)
#define PIN4_OUT    0x10	//or (1<<4)
#define PIN5_OUT    0x20	//or (1<<5)
#define PIN6_OUT    0x40	//or (1<<6)
#define PIN7_OUT    0x80	//or (1<<7)
#define PIN1_7_OUT  0xFF	

#define PIN0_HIGH     PIN0_OUT
#define PIN1_HIGH     PIN1_OUT
#define PIN2_HIGH     PIN2_OUT
#define PIN3_HIGH     PIN3_OUT
#define PIN4_HIGH     PIN4_OUT
#define PIN5_HIGH     PIN5_OUT
#define PIN6_HIGH     PIN6_OUT
#define PIN7_HIGH     PIN7_OUT
#define PIN1_7_HIGH   PIN1_7_OUT

#define PIN0_LOW     LOW
#define PIN1_LOW     LOW
#define PIN2_LOW     LOW
#define PIN3_LOW     LOW
#define PIN4_LOW     LOW
#define PIN5_LOW     LOW
#define PIN6_LOW     LOW
#define PIN7_LOW     LOW
#define PIN1_7_LOW   LOW


#define PIN0_IN     LOW
#define PIN1_IN     LOW
#define PIN2_IN     LOW
#define PIN3_IN     LOW
#define PIN4_IN     LOW
#define PIN5_IN     LOW
#define PIN6_IN     LOW
#define PIN7_IN     LOW

#define PIN0_PULLUP    PIN0_OUT
#define PIN1_PULLUP    PIN1_OUT
#define PIN2_PULLUP    PIN2_OUT
#define PIN3_PULLUP    PIN3_OUT
#define PIN4_PULLUP    PIN4_OUT
#define PIN5_PULLUP    PIN5_OUT
#define PIN6_PULLUP    PIN6_OUT
#define PIN7_PULLUP    PIN7_OUT
#define PIN1_7_PULLUP  PIN1_7_OUT

#define PIN0_NOPULL    LOW
#define PIN1_NOPULL    LOW
#define PIN2_NOPULL    LOW
#define PIN3_NOPULL    LOW
#define PIN4_NOPULL    LOW
#define PIN5_NOPULL    LOW
#define PIN6_NOPULL    LOW
#define PIN7_NOPULL    LOW

void gpioInitPinModeAndValue(uint8_t port, uint8_t pinNumber, uint8_t mode, uint8_t initValue);
uint8_t gpioReadPin(uint8_t port, uint8_t pin);
uint8_t gpioTogglePin(uint8_t port, uint8_t pin);
void gpioSetPin(uint8_t port, uint8_t pin, uint8_t value);

#endif /* GPIO_H_ */