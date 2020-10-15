/******************************************************************************/
/* Author : Abdullah Alsharqawi													  */
/* Date	  : 13/3/2018 														  */
/* Version: V01 															  */
/******************************************************************************/
#include "std_types.h"
#include "SEV_SEG_H.h"
#include "DIO_config.h"
/********************************************************************************
	Description : the function  to initialize  Seven segment
*********************************************************************************/
void SEV_SEG_voidinitialize(void)
{

}
/********************************************************************************
	Description : the function  to display the number sent to it on Seven segment
*********************************************************************************/
void SevSegment1_Write(u8 DisplayNum)
{
	switch (DisplayNum)
		{
		case 0:
				DIO_WritePinValue(PC0 ,DIO_u8_LOW);
				DIO_WritePinValue(PC1 ,DIO_u8_LOW);
				DIO_WritePinValue(PC2 ,DIO_u8_LOW);
				DIO_WritePinValue(PC3 ,DIO_u8_LOW);
				DIO_WritePinValue(PC4 ,DIO_u8_LOW);
				DIO_WritePinValue(PC5 ,DIO_u8_HIGH);
				DIO_WritePinValue(PC6 ,DIO_u8_LOW);
				break;

		case 1:
				DIO_WritePinValue(PC0 ,DIO_u8_HIGH);
				DIO_WritePinValue(PC1 ,DIO_u8_LOW);
				DIO_WritePinValue(PC2 ,DIO_u8_LOW);
				DIO_WritePinValue(PC3 ,DIO_u8_HIGH);
				DIO_WritePinValue(PC4 ,DIO_u8_HIGH);
				DIO_WritePinValue(PC5 ,DIO_u8_HIGH);
				DIO_WritePinValue(PC6 ,DIO_u8_HIGH);
				break;

		case 2:
				DIO_WritePinValue(PC0 ,DIO_u8_LOW);
				DIO_WritePinValue(PC1 ,DIO_u8_LOW);
				DIO_WritePinValue(PC2 ,DIO_u8_HIGH);
				DIO_WritePinValue(PC3 ,DIO_u8_LOW);
				DIO_WritePinValue(PC4 ,DIO_u8_LOW);
				DIO_WritePinValue(PC5 ,DIO_u8_LOW);
				DIO_WritePinValue(PC6 ,DIO_u8_HIGH);
				break;

		case 3:
				DIO_WritePinValue(PC0 ,DIO_u8_LOW);
				DIO_WritePinValue(PC1 ,DIO_u8_LOW);
				DIO_WritePinValue(PC2 ,DIO_u8_LOW);
				DIO_WritePinValue(PC3 ,DIO_u8_LOW);
				DIO_WritePinValue(PC4 ,DIO_u8_HIGH);
				DIO_WritePinValue(PC5 ,DIO_u8_LOW);
				DIO_WritePinValue(PC6 ,DIO_u8_HIGH);
				break;

		case 4:
				DIO_WritePinValue(PC0 ,DIO_u8_HIGH);
				DIO_WritePinValue(PC1 ,DIO_u8_LOW);
				DIO_WritePinValue(PC2 ,DIO_u8_LOW);
				DIO_WritePinValue(PC3 ,DIO_u8_HIGH);
				DIO_WritePinValue(PC4 ,DIO_u8_HIGH);
				DIO_WritePinValue(PC5 ,DIO_u8_LOW);
				DIO_WritePinValue(PC6 ,DIO_u8_LOW);
				break;

		case 5:
				DIO_WritePinValue(PC0 ,DIO_u8_LOW);
				DIO_WritePinValue(PC1 ,DIO_u8_HIGH);
				DIO_WritePinValue(PC2 ,DIO_u8_LOW);
				DIO_WritePinValue(PC3 ,DIO_u8_LOW);
				DIO_WritePinValue(PC4 ,DIO_u8_HIGH);
				DIO_WritePinValue(PC5 ,DIO_u8_LOW);
				DIO_WritePinValue(PC6 ,DIO_u8_LOW);
				break;

		case 6:
				DIO_WritePinValue(PC0 ,DIO_u8_LOW);
				DIO_WritePinValue(PC1 ,DIO_u8_HIGH);
				DIO_WritePinValue(PC2 ,DIO_u8_LOW);
				DIO_WritePinValue(PC3 ,DIO_u8_LOW);
				DIO_WritePinValue(PC4 ,DIO_u8_LOW);
				DIO_WritePinValue(PC5 ,DIO_u8_LOW);
				DIO_WritePinValue(PC6 ,DIO_u8_LOW);
				break;
		case 7:
				DIO_WritePinValue(PC0 ,DIO_u8_LOW);
				DIO_WritePinValue(PC1 ,DIO_u8_LOW);
				DIO_WritePinValue(PC2 ,DIO_u8_LOW);
				DIO_WritePinValue(PC3 ,DIO_u8_HIGH);
				DIO_WritePinValue(PC4 ,DIO_u8_HIGH);
				DIO_WritePinValue(PC5 ,DIO_u8_HIGH);
				DIO_WritePinValue(PC6 ,DIO_u8_HIGH);
				break;
		case 8:
				DIO_WritePinValue(PC0 ,DIO_u8_LOW);
				DIO_WritePinValue(PC1 ,DIO_u8_LOW);
				DIO_WritePinValue(PC2 ,DIO_u8_LOW);
				DIO_WritePinValue(PC3 ,DIO_u8_LOW);
				DIO_WritePinValue(PC4 ,DIO_u8_LOW);
				DIO_WritePinValue(PC5 ,DIO_u8_LOW);
				DIO_WritePinValue(PC6 ,DIO_u8_LOW);
				break;
		case 9:
				DIO_WritePinValue(PC0 ,DIO_u8_LOW);
				DIO_WritePinValue(PC1 ,DIO_u8_LOW);
				DIO_WritePinValue(PC2 ,DIO_u8_LOW);
				DIO_WritePinValue(PC3 ,DIO_u8_LOW);
				DIO_WritePinValue(PC4 ,DIO_u8_HIGH);
				DIO_WritePinValue(PC5 ,DIO_u8_LOW);
				DIO_WritePinValue(PC6 ,DIO_u8_LOW);
				break;
		default:
				/*ERROR   state*/
				DIO_WritePinValue(PC0 ,DIO_u8_LOW);
				DIO_WritePinValue(PC1 ,DIO_u8_LOW);
				DIO_WritePinValue(PC2 ,DIO_u8_LOW);
				DIO_WritePinValue(PC3 ,DIO_u8_LOW);
				DIO_WritePinValue(PC4 ,DIO_u8_LOW);
				DIO_WritePinValue(PC5 ,DIO_u8_LOW);
				DIO_WritePinValue(PC6 ,DIO_u8_LOW);
				break;
		}
}



void SevSegment2_Write(u8 DisplayNum)
{
	switch (DisplayNum)
	{
	case 0:
			DIO_WritePinValue(PB0 ,DIO_u8_LOW);
			DIO_WritePinValue(PB1 ,DIO_u8_LOW);
			DIO_WritePinValue(PB2 ,DIO_u8_LOW);
			DIO_WritePinValue(PB3 ,DIO_u8_LOW);
			DIO_WritePinValue(PB4 ,DIO_u8_LOW);
			DIO_WritePinValue(PB5 ,DIO_u8_HIGH);
			DIO_WritePinValue(PB6 ,DIO_u8_LOW);
			break;

	case 1:
			DIO_WritePinValue(PB0 ,DIO_u8_HIGH);
			DIO_WritePinValue(PB1 ,DIO_u8_LOW);
			DIO_WritePinValue(PB2 ,DIO_u8_LOW);
			DIO_WritePinValue(PB3 ,DIO_u8_HIGH);
			DIO_WritePinValue(PB4 ,DIO_u8_HIGH);
			DIO_WritePinValue(PB5 ,DIO_u8_HIGH);
			DIO_WritePinValue(PB6 ,DIO_u8_HIGH);
			break;

	case 2:
			DIO_WritePinValue(PB0 ,DIO_u8_LOW);
			DIO_WritePinValue(PB1 ,DIO_u8_LOW);
			DIO_WritePinValue(PB2 ,DIO_u8_HIGH);
			DIO_WritePinValue(PB3 ,DIO_u8_LOW);
			DIO_WritePinValue(PB4 ,DIO_u8_LOW);
			DIO_WritePinValue(PB5 ,DIO_u8_LOW);
			DIO_WritePinValue(PB6 ,DIO_u8_HIGH);
			break;

	case 3:
			DIO_WritePinValue(PB0 ,DIO_u8_LOW);
			DIO_WritePinValue(PB1 ,DIO_u8_LOW);
			DIO_WritePinValue(PB2 ,DIO_u8_LOW);
			DIO_WritePinValue(PB3 ,DIO_u8_LOW);
			DIO_WritePinValue(PB4 ,DIO_u8_HIGH);
			DIO_WritePinValue(PB5 ,DIO_u8_LOW);
			DIO_WritePinValue(PB6 ,DIO_u8_HIGH);
			break;

	case 4:
			DIO_WritePinValue(PB0 ,DIO_u8_HIGH);
			DIO_WritePinValue(PB1 ,DIO_u8_LOW);
			DIO_WritePinValue(PB2 ,DIO_u8_LOW);
			DIO_WritePinValue(PB3 ,DIO_u8_HIGH);
			DIO_WritePinValue(PB4 ,DIO_u8_HIGH);
			DIO_WritePinValue(PB5 ,DIO_u8_LOW);
			DIO_WritePinValue(PB6 ,DIO_u8_LOW);
			break;

	case 5:
			DIO_WritePinValue(PB0 ,DIO_u8_LOW);
			DIO_WritePinValue(PB1 ,DIO_u8_HIGH);
			DIO_WritePinValue(PB2 ,DIO_u8_LOW);
			DIO_WritePinValue(PB3 ,DIO_u8_LOW);
			DIO_WritePinValue(PB4 ,DIO_u8_HIGH);
			DIO_WritePinValue(PB5 ,DIO_u8_LOW);
			DIO_WritePinValue(PB6 ,DIO_u8_LOW);
			break;

	case 6:
			DIO_WritePinValue(PB0 ,DIO_u8_LOW);
			DIO_WritePinValue(PB1 ,DIO_u8_HIGH);
			DIO_WritePinValue(PB2 ,DIO_u8_LOW);
			DIO_WritePinValue(PB3 ,DIO_u8_LOW);
			DIO_WritePinValue(PB4 ,DIO_u8_LOW);
			DIO_WritePinValue(PB5 ,DIO_u8_LOW);
			DIO_WritePinValue(PB6 ,DIO_u8_LOW);
			break;
	case 7:
			DIO_WritePinValue(PB0 ,DIO_u8_LOW);
			DIO_WritePinValue(PB1 ,DIO_u8_LOW);
			DIO_WritePinValue(PB2 ,DIO_u8_LOW);
			DIO_WritePinValue(PB3 ,DIO_u8_HIGH);
			DIO_WritePinValue(PB4 ,DIO_u8_HIGH);
			DIO_WritePinValue(PB5 ,DIO_u8_HIGH);
			DIO_WritePinValue(PB6 ,DIO_u8_HIGH);
			break;
	case 8:
			DIO_WritePinValue(PB0 ,DIO_u8_LOW);
			DIO_WritePinValue(PB1 ,DIO_u8_LOW);
			DIO_WritePinValue(PB2 ,DIO_u8_LOW);
			DIO_WritePinValue(PB3 ,DIO_u8_LOW);
			DIO_WritePinValue(PB4 ,DIO_u8_LOW);
			DIO_WritePinValue(PB5 ,DIO_u8_LOW);
			DIO_WritePinValue(PB6 ,DIO_u8_LOW);
			break;
	case 9:
			DIO_WritePinValue(PB0 ,DIO_u8_LOW);
			DIO_WritePinValue(PB1 ,DIO_u8_LOW);
			DIO_WritePinValue(PB2 ,DIO_u8_LOW);
			DIO_WritePinValue(PB3 ,DIO_u8_LOW);
			DIO_WritePinValue(PB4 ,DIO_u8_HIGH);
			DIO_WritePinValue(PB5 ,DIO_u8_LOW);
			DIO_WritePinValue(PB6 ,DIO_u8_LOW);
			break;
	default:
			/*ERROR   state*/
			DIO_WritePinValue(PB0 ,DIO_u8_LOW);
			DIO_WritePinValue(PB1 ,DIO_u8_LOW);
			DIO_WritePinValue(PB2 ,DIO_u8_LOW);
			DIO_WritePinValue(PB3 ,DIO_u8_LOW);
			DIO_WritePinValue(PB4 ,DIO_u8_LOW);
			DIO_WritePinValue(PB5 ,DIO_u8_LOW);
			DIO_WritePinValue(PB6 ,DIO_u8_LOW);
			break;
	}
}













