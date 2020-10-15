#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "UART_REG.h"
#include "UART.h"
#include "UART_CFG.h"


static u8 Rx_data[]={0};
static u16 Rx_count=0;

void UART_Init (void)
{
	//a3taked hateb2a configurable l kol uart ana mwasalo ya3ny kol
	//uart mmkn yeb2a lih prescaller mo3aiian 
	u16 UBRRHL=(8000000/(16*UART_CFG[0].Baude_Rate))-1; //Asynch normal mode
	UBRRH=(u8) (UBRRHL>>8); // dah register basagel fi value of UBRRHL
	UBRRL=(u8) UBRRHL;
	UCSRB = (1<<7) | (1<<4) | (1<<3); // enable transmission (TXEN..3) and reception (RXEN..4)
	/*data length config	
	Data_5=0,
	Data_6,
	Data_7,
	Data_8,
	Data_9
	*/
	if (UART_CFG[0].Data_Length == Data_5) // 2bits bay3'aiiaro fi tool el data (UCSZ0..1) (UCSZ0..2)
	{ //1..clr  2..clr

		//SETBIT(UCSRC,7);
		//CLRBIT(UCSRC,1);
		//CLRBIT(UCSRC,2);
	}
	else if (UART_CFG[0].Data_Length == Data_6)
	{ //1..clr   2..set
		UCSRC |= (1<<7)|(1<<2);
		//CLRBIT(UCSRC,1);
		//SETBIT(UCSRC,2);
	}
	else if (UART_CFG[0].Data_Length == Data_7)
	{  //1..set  2..clr
		UCSRC |= (1<<7)|(1<<1);
		//SETBIT(UCSRC,1);
		//CLRBIT(UCSRC,2);
	}
	else if (UART_CFG[0].Data_Length == Data_8)
	{ //1..set  2..set
		UCSRC |= (1<<7)|(1<<2)|(1<<1);
		//SETBIT(UCSRC,1);
		//SETBIT(UCSRC,2);
	}

	else 
	{
		/*error*/
	}
	/*parity check config
	PC_Even=0,
	PC_Odd,
	PC_None
	*/
	if (UART_CFG[0].Parity_Check == PC_None) // for Parity Check mode
	{
		//CLRBIT(UCSRC,4);
		//CLRBIT(UCSRC,5);
	}
	else if (UART_CFG[0].Parity_Check == PC_Even)
	{
		//CLRBIT(UCSRC,4);
		//SETBIT(UCSRC,5);
		UCSRC |= (1<<7)|(1<<5);
	}
	else if (UART_CFG[0].Parity_Check == PC_Odd)
	{
		//SETBIT(UCSRC,4);
		//SETBIT(UCSRC,5);
		UCSRC |= (1<<7)|(1<<5)|(1<<4);
	}
    else
	{
		/*error*/
	}
	/*stop length config
	Stop_1=0,
	Stop_2	
	*/
	if (UART_CFG[0].Stop_Length == Stop_1) // for Stop length mode
	{
		//CLRBIT(UCSRC,3);
	}
	if (UART_CFG[0].Stop_Length == Stop_2)
	{
		UCSRC |= (1<<7)|(1<<3);
	}
	else
	{
		/*error*/
	}
}

void UART_Transmit (u8* data, u16 length)
{
	u16 index;
	for (index=0;index<length;index++)
	{
		while(!(UCSRA & (1<<5))); //UDRE is bit no.5
		//UCSRB &= ~(1<<TXB8);
		//if (*data & 0x0100)
			//UCSRB |= (TXB8);
		UDR = data[index];
	}
}

void UART_Receive (u8* data, u16* length) // el user hayb3atly variable esmo data, 
// 3ebara 3n array msh 3aref tolha kam (length) elli hoa hayeb3atly reference lih 3ashan 2a3'aiiar
// toolo kol shwaiia
{
	u16 i;
	if (Rx_count!=0)
	{
		*length=Rx_count;
		for (i=0;i<Rx_count;i++)
		{
			data[i]=Rx_data[i];
		}
		Rx_count=0; // leh baysaffar el Rx_count tany 
	}
	else
	{
		*length=0;
	}
}


void __vector_13 (void) __attribute__((signal,used));
void __vector_13 (void)
{
	Rx_data[Rx_count]=UDR;
	Rx_count++;
}
