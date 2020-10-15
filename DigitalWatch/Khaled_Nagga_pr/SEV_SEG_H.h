/******************************************************************************/
/* Author : Abdullah Alsharqawi													  */
/* Date	  : 13/3/2018 														  */
/* Version: V01 															  */
/******************************************************************************/
#ifndef _SEV_SEG_H
#define _SEV_SEG_H

/********************************************************************************
	Description : the function  to initialize  Seven segment
*********************************************************************************/
void SEV_SEG_voidinitialize(void);
/********************************************************************************
	Description : the function  to display the number sent to it on Seven segment
*********************************************************************************/
void SEV_SEG1_voidSetValue(u8 DisplayNum);
void SEV_SEG2_voidSetValue(u8 DisplayNum);

#endif 
