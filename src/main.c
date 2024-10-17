
/************LIBRARIES************/
#include "../include/BIT_MATH.h"
#include "../include/STD_Types.h"

/************MCAL************/
#include "../include/MRCC_Interface.h"
#include "../include/MGPIO_Interface.h"
#include "../include/MSTK_Interface.h"

/************HAL************/
#include "../include/HLED_MATRIX_Interface.h"
#include "../include/HSTP_Interface.h"

u8 LED_str[] = "BHBJ";
u8 ArrSize = sizeof(LED_str)/sizeof(u8);


void main(void) {

	MSTK_void_Init();
	MRCC_void_Init();

	MRCC_void_EnablePeripheral(RCC_AHB1, RCC_AHB1_GPIOA);
	MRCC_void_EnablePeripheral(RCC_AHB1, RCC_AHB1_GPIOB);

	HLED_MATRIX_void_Init();

	while(1){

		HLED_MATRIX_void_DisplayString(LED_str, ArrSize);
	}



}
