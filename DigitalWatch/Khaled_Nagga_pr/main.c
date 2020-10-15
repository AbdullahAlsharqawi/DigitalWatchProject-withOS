/*
 * main.c
 *
 *  Created on: Feb 23, 2018
 *      Author: Abdullah Alsharqawi
 */
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "DIO.h"
#include "DIO_reg.h"
#include "DIO_config.h"


void main (void)
{
	DIO_VoidInitialize();



	while (1){
		DIO_WritePinValue(0,DIO_u8_HIGH);
		DIO_WritePinValue(1,DIO_u8_HIGH);
		DIO_WritePinValue(2,DIO_u8_HIGH);
		DIO_WritePinValue(3,DIO_u8_HIGH);
		DIO_WritePinValue(4,DIO_u8_HIGH);
		DIO_WritePinValue(5,DIO_u8_HIGH);
		DIO_WritePinValue(6,DIO_u8_HIGH);
		DIO_WritePinValue(7,DIO_u8_HIGH);
		DIO_WritePinValue(8,DIO_u8_HIGH);
		DIO_WritePinValue(9,DIO_u8_HIGH);
		DIO_WritePinValue(10,DIO_u8_HIGH);
		DIO_WritePinValue(11,DIO_u8_HIGH);
		DIO_WritePinValue(12,DIO_u8_HIGH);
		DIO_WritePinValue(13,DIO_u8_HIGH);
		DIO_WritePinValue(14,DIO_u8_HIGH);
		DIO_WritePinValue(15,DIO_u8_HIGH);
		DIO_WritePinValue(16,DIO_u8_HIGH);
		DIO_WritePinValue(17,DIO_u8_HIGH);
		DIO_WritePinValue(18,DIO_u8_HIGH);
		DIO_WritePinValue(19,DIO_u8_HIGH);
		DIO_WritePinValue(20,DIO_u8_HIGH);
		DIO_WritePinValue(21,DIO_u8_HIGH);
		DIO_WritePinValue(22,DIO_u8_HIGH);
		DIO_WritePinValue(23,DIO_u8_HIGH);
		DIO_WritePinValue(24,DIO_u8_HIGH);
		DIO_WritePinValue(25,DIO_u8_HIGH);

		DIO_WritePinValue(26,DIO_u8_HIGH);
		DIO_WritePinValue(27,DIO_u8_HIGH);
		DIO_WritePinValue(28,DIO_u8_HIGH);
		DIO_WritePinValue(29,DIO_u8_HIGH);
		DIO_WritePinValue(30,DIO_u8_HIGH);
		DIO_WritePinValue(31,DIO_u8_HIGH);
	}
}
