/*
 * hw_layer.c
 *
 *  Created on: 30 Aðu 2019
 *      Author: alikaan
 */

#ifndef HW_LAYER_C_
#define HW_LAYER_C_

#include "main.h"
#include "dwt_stm32_delay.h"


static inline void setGpioOutputMode(void *port, uint32_t pin)
{
	LL_GPIO_SetPinMode(port, pin, LL_GPIO_MODE_OUTPUT);
	LL_GPIO_SetPinSpeed(port, pin, LL_GPIO_SPEED_FREQ_LOW);
	LL_GPIO_SetPinOutputType(port, pin, LL_GPIO_OUTPUT_PUSHPULL);
}

static inline void setGpioInputMode(void *port, uint32_t pin)
{
	LL_GPIO_SetPinMode(port, pin, LL_GPIO_MODE_FLOATING);
}

static inline uint32_t getGpio(void *port, uint32_t pin)
{
	return LL_GPIO_IsInputPinSet(port, pin);
}

static inline void setGpio(void *port, uint32_t pin)
{
	LL_GPIO_SetOutputPin(port, pin);
}

static inline void resetGpio(void *port, uint32_t pin)
{
	LL_GPIO_ResetOutputPin(port, pin);
}


#endif /* HW_LAYER_C_ */
