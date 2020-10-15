/********************************************/
/* Author: Abdullah Alsharqawi              */
/* Date:   29/03/2018                       */
/* Version: V01                             */
/********************************************/
#include"STD_TYPES.h"
#include"BIT_MATH.h"
#include"Traffic_config.h"
#include"DIO_config.h"
#include"DIO.h"
#include"SEV_SEG_H.h"


void Traffic_Task(void){
	
	static State_t State=Red;
	static u8 Local_u8Count=RED_TIME;
	
	switch(State){
		
		case Red:
		DIO_WritePinValue(Red_Led,DIO_u8_HIGH);
		DIO_WritePinValue(Yellow_Led,DIO_u8_LOW);
		DIO_WritePinValue(Green_Led,DIO_u8_LOW);
		
		SevSegment1_Write(Local_u8Count/10);
		SevSegment2_Write(Local_u8Count%10);
		
		if(0==Local_u8Count--){
			
			State=Yellow;
			Local_u8Count=YELLOW_TIME;
		}
	
		break;
		
		
		case Yellow:
		
		DIO_WritePinValue(Red_Led,DIO_u8_LOW);
		DIO_WritePinValue(Green_Led,DIO_u8_LOW);
		
		if(DIO_ReadPinValue(Yellow_Led)==DIO_u8_HIGH){
			
			DIO_WritePinValue(Yellow_Led,DIO_u8_LOW);
			
		}
		
		else{
			
			DIO_WritePinValue(Yellow_Led,DIO_u8_HIGH);
		}
		
		SevSegment1_Write(Local_u8Count/10);
		SevSegment2_Write(Local_u8Count%10);
		
		if(0==Local_u8Count--){
			
			State=Green;
			Local_u8Count=GREEN_TIME;
		}
		
		
		break;
		
		
		case Green:
		
		DIO_WritePinValue(Red_Led,DIO_u8_LOW);
		DIO_WritePinValue(Yellow_Led,DIO_u8_LOW);
		DIO_WritePinValue(Green_Led,DIO_u8_HIGH);
		
		SevSegment1_Write(Local_u8Count/10);
		SevSegment2_Write(Local_u8Count%10);
		
		if(0==Local_u8Count--){
			
			State=Red;
			Local_u8Count=RED_TIME;
		}
		
		break;
		
		
		
		
	}
	
}
