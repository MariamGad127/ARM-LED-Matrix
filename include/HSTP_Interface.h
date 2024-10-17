/*
 * HSTP_Interface.h
 *
 *  Created on: Feb 25, 2024
 *      Author: M
 */

#ifndef HSTP_INTERFACE_H_
#define HSTP_INTERFACE_H_

void HSTP_void_Init(void);
void HSTP_void_SendData(u8 copyu8_STP, u8 copyu8_Data);
void HSTP_void_LEDMatrix(u8 *ptru8_Data);
void HSTP_void_LEDMatrixScrollingSync(u64 *ptru64_Data, u8 RowNum);
void HSTP_void_LEDMatrixScrollingAsync(u64 *ptru64_Data, u8 Index);


#endif /* HSTP_INTERFACE_H_ */
