/********************************************/
/* Author: Abdullah Alsharqawi              */
/* Date:   29/03/2018                       */
/* Version: V01                             */
/********************************************/
#ifndef _DIO_CONFIG_H
#define _DIO_CONFIG_H

/* Choose default pin direction between                 */
/* DIO_u8_INPUT , DIO_u8_OUTPUT , DIO_u8_INPUTWITHPUR   */

typedef enum{
DIO_u8_OUTPUT=0,
DIO_u8_INPUT,
DIO_u8_INPUTWITHPUR

}DIO_Mode_t;


typedef enum{
Green_Led=0,Yellow_Led,Red_Led,PA3,PA4,PA5,PA6,PA7,
PB0,PB1,PB2,PB3,PB4,PB5,PB6,PB7,
PC0,PC1,PC2,PC3,PC4,PC5,PC6,PC7,
PD0,PD1,PD2,PD3,PD4,PD5,PD6,PD7

}DIO_Pinname_t;

typedef enum{
	DIO_u8_LOW=0,
	DIO_u8_HIGH
}DIO_Val_t;



typedef enum{
 DIO_u8_PORTA_START=		    0,
 DIO_u8_PORTA_END=				7,
 DIO_u8_PORTA_SIZE=				8,

 DIO_u8_PORTB_START=			8,
 DIO_u8_PORTB_END=				15,
 DIO_u8_PORTB_SIZE=				8,

 DIO_u8_PORTC_START=			16,
 DIO_u8_PORTC_END=				23,
 DIO_u8_PORTC_SIZE=				8,

 DIO_u8_PORTD_START=			24,
 DIO_u8_PORTD_END=				31,
 DIO_u8_PORTD_SIZE=				8,

}DIO_Port_Limits;





/*Group D limits  						 */

#define DIO_u8_TOTAL_PINS				32



//#define DIO_u8_HIGH                     1
//#define DIO_u8_LOW                      0



extern const DIO_Mode_t Array[];

             
#endif
