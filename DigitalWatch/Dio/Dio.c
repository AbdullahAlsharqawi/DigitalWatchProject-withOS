/********************************************/
/* Author	: Abdullah Alsharqawi			*/
/* Date		: 1/4/2018						*/
/* Version	: V02							*/
/********************************************/
#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "Dio_reg.h"
#include "Dio.h"

static u8 DIO_u8Initialized = (u8)0;

extern void Dio_Init(void)
{
	if (DIO_u8Initialized == 0)
	{
		u8 Local_u8PinIndex;
		for(Local_u8PinIndex = 0; Local_u8PinIndex < NumberOfPins; Local_u8PinIndex++)
		{
			u8 Local_u8Port = Local_u8PinIndex/8;
			u8 Local_u8Pin = Local_u8PinIndex%8;
			switch(Local_u8Port)
			{
				case PA:
					switch (Dio_cfg[Local_u8PinIndex])
					{
					case InputWithInternalPUR:
						DDRA &= ~(1 << Local_u8Pin);
						PORTA |= (1 << Local_u8Pin);
						break;
					case InputWithoutInternalPUR:
						DDRA &= ~(1 << Local_u8Pin);
						break;
					case Output:
						DDRA |= (1 << Local_u8Pin);
						break;
					default:
						break;
					}
				break;
				case PB:
					switch (Dio_cfg[Local_u8PinIndex])
					{
					case InputWithInternalPUR:
						DDRB &= ~(1 << Local_u8Pin);
						PORTB |= (1 << Local_u8Pin);
						break;
					case InputWithoutInternalPUR:
						DDRB &= ~(1 << Local_u8Pin);
						break;
					case Output:
						DDRB |= (1 << Local_u8Pin);
						break;
					default:
						break;
					}
				break;
				case PC:
					switch (Dio_cfg[Local_u8PinIndex])
					{
					case InputWithInternalPUR:
						DDRC &= ~(1 << Local_u8Pin);
						PORTC |= (1 << Local_u8Pin);
						break;
					case InputWithoutInternalPUR:
						DDRC &= ~(1 << Local_u8Pin);
						break;
					case Output:
						DDRC |= (1 << Local_u8Pin);
						break;
					default:
						break;
					}
				break;
				case PD:
					switch (Dio_cfg[Local_u8PinIndex])
					{
					case InputWithInternalPUR:
						DDRD &= ~(1 << Local_u8Pin);
						PORTD |= (1 << Local_u8Pin);
						break;
					case InputWithoutInternalPUR:
						DDRD &= ~(1 << Local_u8Pin);
						break;
					case Output:
						DDRD |= (1 << Local_u8Pin);
						break;
					default:
						break;
					}
				break;
				default:
					/* Error */
				break;
			}
		}
		DIO_u8Initialized = 1;
	}
}

/*
extern void Dio_WritePin(Dio_pinname_t pinname, u8 value)
{
	volatile u8 *PortX = (u8*)(0x3B - (3 * (pinname/8)));
	if((pinname <= NumberOfPins) && ((0==value) || (1==value)))
	{
		*PortX = ((*PortX) | (value << (pinname%8))) & ~(~value << (pinname%8));
	}
}
*/

extern void Dio_WritePin(Dio_pinname_t pinname, u8 value)
{
	u8 Local_u8Port = pinname/8;
	u8 Local_u8Pin = pinname%8;
	switch(Local_u8Port)
	{
		case PA:
			if(0 != value)
			{
				PORTA |= (1<<Local_u8Pin);
			}
			else
			{
				PORTA &= ~(1<<Local_u8Pin);
			}
		break;
		case PB:
			if(0 != value)
			{
				PORTB |= (1<<Local_u8Pin);
			}
			else
			{
				PORTB &= ~(1<<Local_u8Pin);
			}
		break;
		case PC:
			if(0 != value)
			{
				PORTC |= (1<<Local_u8Pin);
			}
			else
			{
				PORTC &= ~(1<<Local_u8Pin);
			}
		break;
		case PD:
			if(0 != value)
			{
				PORTD |= (1<<Local_u8Pin);
			}
			else
			{
				PORTD &= ~(1<<Local_u8Pin);
			}
		break;
		default:
			/* Error */
		break;
	}
}

extern bool Dio_ReadPin(Dio_pinname_t pinname)
{
	bool Local_boolResult;
	u8 Local_u8Port = pinname/8;
	u8 Local_u8Pin = pinname%8;
	switch(Local_u8Port)
	{
	case PA:
		Local_boolResult = GET_BIT(PINA,Local_u8Pin);
	break;
	case PB:
		Local_boolResult = GET_BIT(PINB,Local_u8Pin);
	break;
	case PC:
		Local_boolResult = GET_BIT(PINC,Local_u8Pin);
	break;
	case PD:
		Local_boolResult = GET_BIT(PIND,Local_u8Pin);
	break;
	default:
		/* Error */
	break;
	}
	return Local_boolResult;
}

