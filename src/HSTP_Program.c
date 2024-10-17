/*
 * HSTP_Program.c
 *
 *  Created on: Feb 25, 2024
 *      Author: M
 */


/************LIBRARIES************/
#include "../include/BIT_MATH.h"
#include "../include/STD_Types.h"

/************MCAL************/
#include "../include/MGPIO_Interface.h"
#include "../include/MSTK_Interface.h"

/************HAL************/
#include "../include/HSTP_Interface.h"
#include "../include/HSTP_Private.h"
#include "../include/HSTP_Config.h"


void HSTP_void_Init(void) {
	u8 localu8_Iterator = 0;
	for(localu8_Iterator = 0; localu8_Iterator < STP_NUM; localu8_Iterator++) {
		// Data pin
		MGPIO_void_SetPinMode(STP_Config[localu8_Iterator].Data_Port, STP_Config[localu8_Iterator].Data_Pin, GPIO_OUTPUT);
		MGPIO_void_SetPinOutputMode(STP_Config[localu8_Iterator].Data_Port, STP_Config[localu8_Iterator].Data_Pin, GPIO_PUSH_PULL, GPIO_MEDIUM_SPEED);
		// Storage pin
		MGPIO_void_SetPinMode(STP_Config[localu8_Iterator].StorageClk_Port, STP_Config[localu8_Iterator].StorageClk_Pin, GPIO_OUTPUT);
		MGPIO_void_SetPinOutputMode(STP_Config[localu8_Iterator].StorageClk_Port, STP_Config[localu8_Iterator].StorageClk_Pin, GPIO_PUSH_PULL, GPIO_MEDIUM_SPEED);
		// Shift pin
		MGPIO_void_SetPinMode(STP_Config[localu8_Iterator].ShiftClk_Port, STP_Config[localu8_Iterator].ShiftClk_Pin, GPIO_OUTPUT);
		MGPIO_void_SetPinOutputMode(STP_Config[localu8_Iterator].ShiftClk_Port, STP_Config[localu8_Iterator].ShiftClk_Pin, GPIO_PUSH_PULL, GPIO_MEDIUM_SPEED);

	}
}

void HSTP_void_SendData(u8 copyu8_STP, u8 copyu8_Data) {
	u8 localu8_Iterator = 0;
	if(copyu8_STP < STP_NUM){
		for(localu8_Iterator = 0; localu8_Iterator < REG_BITS; localu8_Iterator++) {
			MGPIO_void_SetPinValue(STP_Config[localu8_Iterator].Data_Port, STP_Config[localu8_Iterator].Data_Pin, GET_BIT(copyu8_Data, MSB - localu8_Iterator));
			MGPIO_void_SetPinValue(STP_Config[localu8_Iterator].ShiftClk_Port, STP_Config[localu8_Iterator].ShiftClk_Pin, GPIO_PIN_HIGH);
			MGPIO_void_SetPinValue(STP_Config[localu8_Iterator].ShiftClk_Port, STP_Config[localu8_Iterator].ShiftClk_Pin, GPIO_PIN_LOW);
		}
		MGPIO_void_SetPinValue(STP_Config[localu8_Iterator].StorageClk_Port, STP_Config[localu8_Iterator].StorageClk_Pin, GPIO_PIN_HIGH);
		MGPIO_void_SetPinValue(STP_Config[localu8_Iterator].StorageClk_Port, STP_Config[localu8_Iterator].StorageClk_Pin, GPIO_PIN_LOW);

	}
}

void HSTP_void_LEDMatrix(u8 *ptru8_Data) {
	u8 localu8_Iterator = 0;
	u8 localu8_RowVal = 0;
	for(localu8_Iterator = 0; localu8_Iterator < ROWS_NUM; localu8_Iterator++) {

	}
}

void HSTP_void_LEDMatrixScrollingSync(u64 *ptru64_Data, u8 RowNum) {

}

void HSTP_void_LEDMatrixScrollingAsync(u64 *ptru64_Data, u8 Index) {

}
