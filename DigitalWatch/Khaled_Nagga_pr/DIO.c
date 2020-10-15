/************************************************/
/* Author: Abdullah Alsharqawi                  */
/* Date:  29/03/2018                            */
/* Version: V01                                 */
/************************************************/
#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"DIO_reg.h"
#include"DIO_config.h"
#include"DIO.h"


/*************************************************/
/*Description: This function Initialize 
               the I/O ports
                                                */
void DIO_VoidInitialize(void){
	
	
	for(u8 i=0;i<DIO_u8_TOTAL_PINS;i++){

		switch(Array[i]){
			
			case DIO_u8_OUTPUT:
			
			if((DIO_u8_PORTA_START<=i) &&(i<=DIO_u8_PORTA_END)){
			SETBIT(DDRA,i);
			}
			
			else if((DIO_u8_PORTB_START<=i) &&(i<=DIO_u8_PORTB_END)){
			SETBIT(DDRB,(i-DIO_u8_PORTA_SIZE));	
			}
			
			else if((DIO_u8_PORTC_START<=i) &&(i<=DIO_u8_PORTC_END)){
			SETBIT(DDRC,(i-DIO_u8_PORTA_SIZE-DIO_u8_PORTB_SIZE));	
			}
			
			else{
				
				SETBIT(DDRD,(i-DIO_u8_PORTA_SIZE-DIO_u8_PORTB_SIZE-DIO_u8_PORTC_SIZE));
			}
			
			break;

			case DIO_u8_INPUT:
			if((DIO_u8_PORTA_START<=i) &&(i<=DIO_u8_PORTA_END)){
			CLRBIT(DDRA,i);
			}
			
			else if((DIO_u8_PORTB_START<=i) &&(i<=DIO_u8_PORTB_END)){
			CLRBIT(DDRB,(i-DIO_u8_PORTA_SIZE));	
			}
			
			else if((DIO_u8_PORTC_START<=i) &&(i<=DIO_u8_PORTC_END)){
			CLRBIT(DDRC,(i-DIO_u8_PORTA_SIZE-DIO_u8_PORTB_SIZE));	
			}
			
			else{
				
				CLRBIT(DDRD,(i-DIO_u8_PORTA_SIZE-DIO_u8_PORTB_SIZE-DIO_u8_PORTC_SIZE));
			}
			
		break;
		case DIO_u8_INPUTWITHPUR:
			
			if((DIO_u8_PORTA_START<=i) &&(i<=DIO_u8_PORTA_END)){
			CLRBIT(DDRA,i);
			SETBIT(PORTA,i);
			}
			
			else if((DIO_u8_PORTB_START<=i) &&(i<=DIO_u8_PORTB_END)){
			CLRBIT(DDRB,(i-DIO_u8_PORTA_SIZE));
			SETBIT(PORTB,(i-DIO_u8_PORTA_SIZE));
			
			}
			
			else if((DIO_u8_PORTC_START<=i) &&(i<=DIO_u8_PORTC_END)){
			CLRBIT(DDRC,(i-DIO_u8_PORTA_SIZE-DIO_u8_PORTB_SIZE));
            SETBIT(PORTC,(i-DIO_u8_PORTA_SIZE-DIO_u8_PORTB_SIZE));			
			}
			
			else{
				
				CLRBIT(DDRD,(i-DIO_u8_PORTA_SIZE-DIO_u8_PORTB_SIZE-DIO_u8_PORTC_SIZE));
				SETBIT(PORTD,(i-DIO_u8_PORTA_SIZE-DIO_u8_PORTB_SIZE-DIO_u8_PORTC_SIZE));
			}
			break;
		}
			
			
			
		}
		
	}
	
	
	
	


/*************************************************/


/************************************************/
/*Description: This function Write the Digital
                Values of the I/O pin
               
                                                */

void DIO_WritePinValue(u8 Copy_u8PinIdx,u8 Copy_u8PinVal){
	
	u8 Port_Number= Copy_u8PinIdx/8;
	u8 Pin_Number=Copy_u8PinIdx%8;
	
	switch(Port_Number){
		case 0:
	    if(Copy_u8PinVal == DIO_u8_HIGH)
		{
			SETBIT(PORTA,Pin_Number);
		}			
		else 
		{	
			CLRBIT(PORTA,Pin_Number);
		}
		break;
		
		case 1:
	    if(Copy_u8PinVal == DIO_u8_HIGH)
		{
			SETBIT(PORTB,Pin_Number);
		}			
		else 
		{	
			CLRBIT(PORTB,Pin_Number);
		}
		break;
		
		case 2:
	    if(Copy_u8PinVal == DIO_u8_HIGH)
		{
			SETBIT(PORTC,Pin_Number);
		}			
		else 
		{	
			CLRBIT(PORTC,Pin_Number);
		}
		break;
		
		case 3:
	    if(Copy_u8PinVal == DIO_u8_HIGH)
		{
			SETBIT(PORTD,Pin_Number);
		}			
		else 
		{	
			CLRBIT(PORTD,Pin_Number);
		}
		break;
	}
	
	
}

/*************************************************/


/*Description: This function Read the Digital
                Values of the I/O pin
               
                                                */

u8 DIO_ReadPinValue(u8 Copy_u8PinIdx){
	
	u8 Local_u8Result;

	u8 Port_Number= Copy_u8PinIdx/8;
	u8 Pin_Number=Copy_u8PinIdx%8;

	switch(Port_Number){
		case 0:
			if ((GETBIT(PINB,Pin_Number)))
					{
						Local_u8Result = DIO_u8_HIGH ;
					}
					else
					{
						Local_u8Result = DIO_u8_LOW ;
					}
		break;

		case 1:

			if ((GETBIT(PINB,Pin_Number)))
					{
						Local_u8Result = DIO_u8_HIGH ;
					}
					else
					{
						Local_u8Result = DIO_u8_LOW ;
					}
		break;

		case 2:

			if ((GETBIT(PINB,Pin_Number)))
					{
						Local_u8Result = DIO_u8_HIGH ;
					}
					else
					{
						Local_u8Result = DIO_u8_LOW ;
					}

		break;

		case 3:
			if ((GETBIT(PINB,Pin_Number)))
					{
						Local_u8Result = DIO_u8_HIGH ;
					}
					else
					{
						Local_u8Result = DIO_u8_LOW ;
					}
		break;
	}
	

	return Local_u8Result;
}

/*************************************************/
