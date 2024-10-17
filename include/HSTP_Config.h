/*
 * HSTP_Config.h
 *
 *  Created on: Feb 25, 2024
 *      Author: M
 */

#ifndef HSTP_CONFIG_H_
#define HSTP_CONFIG_H_

#define STP_NUM		2

STP_Configs_t STP_Config[STP_NUM] = {
		{
				GPIO_PORTA,
				GPIO_PIN0,
				GPIO_PORTA,
				GPIO_PIN1,
				GPIO_PORTA,
				GPIO_PIN2,

		},
		{
				GPIO_PORTB,
				GPIO_PIN0,
				GPIO_PORTB,
				GPIO_PIN1,
				GPIO_PORTB,
				GPIO_PIN2,
		}
};



#endif /* HSTP_CONFIG_H_ */
