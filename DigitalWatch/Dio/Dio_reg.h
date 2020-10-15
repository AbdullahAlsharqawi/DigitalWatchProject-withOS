/************************************/
/* Author	: Abdullah Alsharqawi		*/
/* Date		: 1/4/2018				*/
/* Version	: V02					*/
/************************************/
#ifndef _DIO_REG_H
#define _DIO_REG_H

/* Comment: Group A Register			*/
#define DDRA		*((volatile u8*)0x3A)
#define PORTA		*((volatile u8*)0x3B)
#define PINA		*((volatile u8*)0x39)

/* Comment: Group B Register			*/
#define DDRB		*((volatile u8*)0x37)
#define PORTB		*((volatile u8*)0x38)
#define PINB		*((volatile u8*)0x36)

/* Comment: Group C Register			*/
#define DDRC		*((volatile u8*)0x34)
#define PORTC		*((volatile u8*)0x35)
#define PINC		*((volatile u8*)0x33)

/* Comment: Group D Register			*/
#define DDRD		*((volatile u8*)0x31)
#define PORTD		*((volatile u8*)0x32)
#define PIND		*((volatile u8*)0x30)

#endif