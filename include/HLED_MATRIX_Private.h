/*
 * HLED_MATRIX_Private.h
 *
 *  Created on: Feb 18, 2024
 *      Author: M
 */

#ifndef HLED_MATRIX_PRIVATE_H_
#define HLED_MATRIX_PRIVATE_H_


/******* ASCII LETTERS*******/
typedef enum{
	SPACE = 32,
	A = 65,
	B,
	C,
	D,
	E,
	F,
	G,
	H,
	I,
	J,
	K,
	L,
	M,
	N,
	O,
	P,
	Q,
	R,
	S,
	T,
	U,
	V,
	W,
	X,
	Y,
	Z,
}Chars_t;


u8 Char_Pixels[][NUM_OF_COLS] = {
		// Space
		{0, 0, 0, 0, 0, 0, 0, 0},
		// A to Z
		{254, 17, 17, 17, 17, 17, 254, 0},
		{255, 137, 137, 137, 137, 137, 118, 0},
		{126, 129, 129, 129, 129, 129, 66, 0},
		{255, 129, 129, 129, 129, 129, 126, 0},
		{255, 137, 137, 137, 137, 129, 129, 0},
		{255, 9, 9, 9, 9, 1, 1, 0},
		{126, 129, 129, 129, 145, 145, 114, 0},
		{255, 16, 16, 16, 16, 16, 255, 0},
		{129, 129, 129, 255, 129, 129, 129, 0},
		{96, 128, 128, 128, 128, 128, 127, 0},
		{255, 16, 16, 40, 40, 68, 131, 0},
		{255, 128, 128, 128, 128, 128, 128, 0},
		{255, 2, 4, 8, 4, 2, 255, 0},
		{255, 2, 4, 8, 16, 32, 255, 0},
		{126, 129, 129, 129, 129, 129, 126, 0},
		{255, 17, 17, 17, 17, 17, 14, 0},
		{126, 129, 129, 129, 161, 65, 190, 0},
		{255, 17, 17, 17, 49, 81, 142, 0},
		{78, 145, 145, 145, 145, 145, 98, 0},
		{1, 1, 1, 255, 1, 1, 1, 0},
		{127, 128, 128, 128, 128, 128, 127, 0},
		{31, 32, 64, 128, 64, 32, 31, 0},
		{63, 64, 128, 96, 128, 64, 63, 0},
		{227, 20, 8, 8, 8, 20, 227, 0},
		{7, 8, 16, 224, 16, 8, 7, 0},
		{193, 161, 145, 137, 137, 133, 131, 0},

};


#endif /* HLED_MATRIX_PRIVATE_H_ */
