/*
 * HSTP_Private.h
 *
 *  Created on: Feb 25, 2024
 *      Author: M
 */

#ifndef HSTP_PRIVATE_H_
#define HSTP_PRIVATE_H_


typedef struct {
	u8 Data_Port;
	u8 Data_Pin;
	u8 StorageClk_Port;
	u8 StorageClk_Pin;
	u8 ShiftClk_Port;
	u8 ShiftClk_Pin;
}STP_Configs_t;


/******MACROS*****/
#define ROWS_NUM	8
#define REG_BITS	8
#define MSB			7

#define STP0		0
#define STP1		1
#define STP2		2

#endif /* HSTP_PRIVATE_H_ */
