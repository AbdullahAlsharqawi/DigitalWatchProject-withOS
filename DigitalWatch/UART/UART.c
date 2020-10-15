#include "STD_TYPES.h"
#include "UART_reg.h"
#include "UART.h"

#define u16_SYSTEM_FREQ	8000000


static u16 u16RxLen;
static u8* RxData;

void UART_voidInitialize(void)
{
	u16RxLen =0;
	
	/*set baud rate				*/
	u16 u16BausdPrescal = (u16_SYSTEM_FREQ/(uart_cfg[0].baudRate*16))-1;
	UBRRL = (u8)(u16BausdPrescal);
	UBRRH = (u8)(u16BausdPrescal>>8);
	
	/*enable Tx and Rx			*/
	UCSRB = (1<<RXEN)|(1<<TXEN);
	
	/*to choose UCSRC reg       */ 
	UBRRH |= (1<<URSEL);
	
	/*set parity bit			*/
/*	switch(uart_cfg[0].parity)
	{
		case Parity_none:
			UCSRC &= ~(1<<UPM1);
			UCSRC &= ~(1<<UPM0);
		break;
		case Parity_even:
			UCSRC |=  (1<<UPM1);
			UCSRC &= ~(1<<UPM0);
		break;
		case Parity_odd:
			UCSRC |=  (1<<UPM1);
			UCSRC |=  (1<<UPM0);
		break;
	}
	*/
	/*set stop bits				*/
/*	switch(uart_cfg[0].StopLen)
	{
		case STOP_Len_1:
			UCSRC &= ~(1<<USBS);
		break;
		case STOP_Len_2:
			UCSRC |=  (1<<USBS);
		break;
	}
	*/
	/*set data bits				*/
	/*switch(uart_cfg[0].dataLen)
	{
		case Data_Len_5:
			UCSRB &= ~(1<< UCSZ2);
			UCSRC &= ~(1<< UCSZ1);
			UCSRC &= ~(1<< UCSZ0);
		break;
		case  Data_Len_6:
			UCSRB &= ~(1<< UCSZ2);
			UCSRC &= ~(1<< UCSZ1);
			UCSRC |=  (1<< UCSZ0);
		break;
		case Data_Len_7:
			UCSRB &= ~(1<< UCSZ2);
			UCSRC |=  (1<< UCSZ1);
			UCSRC &= ~(1<< UCSZ0);
		break;
		case Data_Len_8:
			UCSRB &= ~(1<< UCSZ2);
			UCSRC |=  (1<< UCSZ1);
			UCSRC |=  (1<< UCSZ0);
		break;
		case  Data_Len_9:
			UCSRB |=  (1<< UCSZ2);
			UCSRC |=  (1<< UCSZ1);
			UCSRC |=  (1<< UCSZ0);
		break;
	}
	*/
	UCSRC = (1<<URSEL)|(1<<USBS)|(3<<UCSZ0);
	/*Enable Rx interrup		*/  /*---> polling Tx and interrupt Rx */
	UCSRB |= (1<<RXCIE);
}

void UART_voidTransmitData(u8 *Copy_u8DataPTR , u16 Copy_u16DataLen)
{
	
	for(u16 index=0; index<Copy_u16DataLen; index++)
	{

		/*
		TXC---->0 == sending data 
		UDRE --->0 == buffur is not empty
		*/
		//while ( ( ~(UCSRA & (1<<UDRE)) | ~(UCSRA &(1<<TXC) ) );
		while ( !( UCSRA & (1<<UDRE)) );

		UDR=Copy_u8DataPTR[index];
		//UCSRA  &= ~(1<<UDRE);
	}
}

boolean UART_booleanReceiveData(u8 *Copy_u8DataPTR , u16 Copy_u16DataLen)
{
	boolean IsReceivedFlag=0;
	if(u16RxLen != 0)
	{
		Copy_u16DataLen = u16RxLen;
		for(u16 index=0; index<u16RxLen; index++)
		{
			Copy_u8DataPTR[index] = RxData[index];
		}
		u16RxLen=0;
		IsReceivedFlag=1;
	}
	else
	{
		IsReceivedFlag=0;
	}
	
	
	return IsReceivedFlag;
}


void __vector_13(void) __attribute__((signal,used));
void __vector_13(void)
{
	RxData[u16RxLen]=UDR;
	u16RxLen++;
}
