/************************************************/
/* Author: Abdullah Alsharqawi                  */
/* Date:  29/03/2018                            */
/* Version: V01                                 */
/************************************************/

#ifndef _DIO_H
#define _DIO_H


/*************************************************/
/*Description: This function Initialize 
               the I/O ports
                                                */
void DIO_VoidInitialize(void);

/*************************************************/


/************************************************/
/*Description: This function Write the Digital
                Values of the I/O pin
               
                                                */

void DIO_WritePinValue(u8 Copy_u8PinIdx,u8 Copy_u8PinVal);

/*************************************************/


/*Description: This function Read the Digital
                Values of the I/O pin
               
                                                */

u8 DIO_ReadPinValue(u8 Copy_u8PinIdx);

/*************************************************/


                
            
#endif
