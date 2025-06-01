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

//PINS
#define PIN0        0
#define PIN1        1
#define PIN2        2
#define PIN3        3
#define PIN4        4
#define PIN5        5
#define PIN6        6
#define PIN7        7

//OUTs
#define PIN0_OUT    0x01
#define PIN1_OUT    0x02
#define PIN2_OUT    0x04
#define PIN3_OUT    0x08
#define PIN4_OUT    0x10
#define PIN5_OUT    0x20
#define PIN6_OUT    0x40
#define PIN7_OUT    0x80
#define PIN1_7_OUT  0xFF

//HIGH
#define PIN0_HIGH    (1<<0)
#define PIN1_HIGH    (1<<1)
#define PIN2_HIGH    (1<<2)
#define PIN3_HIGH    (1<<3)
#define PIN4_HIGH    (1<<4)
#define PIN5_HIGH    (1<<5)
#define PIN6_HIGH    (1<<6)
#define PIN7_HIGH    (1<<7)
#define PIN1_7_HIGH  (0xFF)

//LOW
#define PIN0_LOW   0
#define PIN1_LOW   0
#define PIN2_LOW   0
#define PIN3_LOW   0
#define PIN4_LOW   0
#define PIN5_LOW   0
#define PIN6_LOW   0
#define PIN7_LOW   0
#define PIN1_7_LOW 0

//INPUT
#define PIN0_IN     0x00
#define PIN1_IN     0x00
#define PIN2_IN     0x00
#define PIN3_IN     0x00
#define PIN4_IN     0x00
#define PIN5_IN     0x00
#define PIN6_IN     0x00
#define PIN7_IN     0x00
//DDRA = PIN0_OUT | PIN1_IN | PIN2_IN | PIN3_IN | PIN4_IN | PIN5_IN | PIN6_IN | PIN7_IN;


//PULLUP
#define PIN0_PULLUP    0x01
#define PIN1_PULLUP    0x02
#define PIN2_PULLUP    0x04
#define PIN3_PULLUP    0x08
#define PIN4_PULLUP    0x10
#define PIN5_PULLUP    0x20
#define PIN6_PULLUP    0x40
#define PIN7_PULLUP    0x80
#define PIN1_7_PULLUP  0xFF


//NOPULL
#define PIN0_NOPULL    0x00
#define PIN1_NOPULL    0x00
#define PIN2_NOPULL    0x00
#define PIN3_NOPULL    0x00
#define PIN4_NOPULL    0x00
#define PIN5_NOPULL    0x00
#define PIN6_NOPULL    0x00
#define PIN7_NOPULL    0x00
//PORTA = PIN0_PULLUP | PIN1_PULLUP | PIN2_NOPULL | PIN3_NOPULL | PIN4_NOPULL | PIN5_NOPULL | PIN6_NOPULL | PIN7_NOPULL;


//MODES
#define MODE_INPUT  0
#define MODE_OUTPUT 1

#define PULLUP      1
#define NOPULL      0

#define HIGH      1
#define LOW       0

void gpioSetPinMode(uint8_t port, uint8_t pin, uint8_t mode, uint8_t initialValue);
void gpioSetPinModeNew(uint8_t port, uint8_t pin, uint8_t mode, uint8_t initialValue);
uint8_t gpioReadPin(uint8_t port, uint8_t pin);
uint8_t gpioTogglePin(uint8_t port, uint8_t pin);
void gpioSetPin(uint8_t port, uint8_t pin, uint8_t value);

#endif /* GPIO_H_ */