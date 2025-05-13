#ifndef PCF8574_H_
#define PCF8574_H_

#include "main.h"
#include "twi.h"

#define PCF8574_ADDRESS (0x20 << 1)
#define READ (1 << 1)
#define WRITE (0 << 1)
#define I2C_PCF_ADDRESS_WITH_READ PCF8574_ADDRESS|READ
#define I2C_PCF_ADDRESS_WITH_WRITE PCF8574_ADDRESS|WRITE


#endif /* PCF8574_H_ */
