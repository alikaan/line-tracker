/*
 * hw_layer.h
 *
 *  Created on: 30 Aðu 2019
 *      Author: alikaan
 */

#ifndef HW_LAYER_H_
#define HW_LAYER_H_

/*in order to set gpio as input, output mode */
void setGpioOutputMode(void *port, uint32_t pin);
void setGpioInputMode(void *port, uint32_t pin);

/*in order to get,set,reset gpio */
uint32_t getGpio(void *port, uint32_t pin);
void setGpio(void *port, uint32_t pin);
void resetGpio(void *port, uint32_t pin);

#endif /* HW_LAYER_H_ */
