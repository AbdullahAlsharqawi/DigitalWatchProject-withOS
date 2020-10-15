

#include "STD_TYPES.h"
#include "DIO.h"
#include "LED.h"

void LED_voidInitialize(void)
{
	DIO_voidWritePin(LED1,0);
	DIO_voidWritePin(LED2,0);
}

void LED_voidSetLED(u8 Copy_u8LED, u8 Copy_u8Vale)
{
	DIO_voidWritePin(Copy_u8LED,Copy_u8Vale);
}

