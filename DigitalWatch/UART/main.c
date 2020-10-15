/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: hp
 */
#include "STD_TYPES.h"
#include "DIO.h"
#include "LED.h"
//#include "SEVENSEGH.h"
#include "UART.h"
#include "GIE_int.h"
#include "DELAY.h"

void main(void)
{

	DIO_Initialize();
	LED_voidInitialize();
	GIE_voidEnable();
	//SeveSeg_voidInitialize();
	UART_voidInitialize();

	u8 *ptr;
	u16 len=1;
	u8 ptr2[1]={104};

	while(1)
	{
		UART_voidTransmitData(ptr2,1);
		Delay_ms(1000);
		//if(UART_booleanReceiveData(ptr,len)==1)
		//{

		//UART_booleanReceiveData(ptr,len);
		//	LED_voidSetLED(LED1,1);
			//Delay_ms(1000);
		//}
		//LED_voidSetLED(LED1,0);
		//Delay_ms(1000);
	/*	LED_voidSetLED(LED1,1);
		LED_voidSetLED(LED2,0);
		Delay_ms(1000);
		LED_voidSetLED(LED1,0);
		LED_voidSetLED(LED2,1);
		Delay_ms(1000);

		SevenSeg_voidDisplayNum(Seg2,1);
		Delay_ms(1000);
		SevenSeg_voidDisplayNum(Seg2,TWO);
		Delay_ms(1000);
		SevenSeg_voidDisplayNum(Seg2,THREE);
		Delay_ms(1000);
		SevenSeg_voidDisplayNum(Seg2,FOUR);
		Delay_ms(1000);
		SevenSeg_voidDisplayNum(Seg2,FIVE);
		Delay_ms(1000);
		SevenSeg_voidDisplayNum(Seg2,SIX);
		Delay_ms(1000);
		SevenSeg_voidDisplayNum(Seg2,SEVEN);
		Delay_ms(1000);
		SevenSeg_voidDisplayNum(Seg2,EIGHT);
		Delay_ms(1000);
		SevenSeg_voidDisplayNum(Seg2,NINE);
		Delay_ms(1000);
		SevenSeg_voidDisplayNum(Seg2,ZERO);
		Delay_ms(1000);*/
	}
}
