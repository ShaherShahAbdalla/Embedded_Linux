/******************************************************************************
 *
 * Module: PORT Driver for Initialization of Ports
 * 			(Supports ATmega8, ATmega16, ATmega32, ATmega64, ATmega128)
 *
 * File Name: PORT.h
 *
 * Description: Driver's APIs' prototypes and typedefs' declaration.
 *
 * Author: Shaher Shah Abdalla Kamal
 *
 * Date: 2-12-2023
 *
 *******************************************************************************/

#ifndef PORT_H_
#define PORT_H_

/****************************************************************************************/
/*									Macros Declaration									*/
/****************************************************************************************/

/* Macros for Compilation mode */
#define Pre_Compilation			0
#define Post_Compilation		1

/* Macros for ATmega model */
#define ATmega8					0
#define ATmega16_32				1
#define ATmega64_128			2

/* Macros for the configurations of the pins */
#define InputEnablePullUp		0
#define InputDisablePullup		1
#define OutputHigh				2
#define OutputLow				3

/* Macros for pins in each port */
#define PORT_PIN0	0
#define PORT_PIN1	1
#define PORT_PIN2	2
#define PORT_PIN3	3
#define PORT_PIN4	4
#define PORT_PIN5	5
#define PORT_PIN6	6
#define PORT_PIN7	7

/* Macros for the number of pins for each ATmega model */
#define ATmega8_NumofPins		23
#define ATmega16_32_NumofPins		32
#define ATmega64_128_NumofPins		53

/****************************************************************************************/
/*								User-defined Declaration								*/
/****************************************************************************************/

/**
 *@brief :  Configuration of a pin
 */
typedef enum
{
	PORT_enumPinInputEnablePullUp = 0,
	PORT_enumPinInputDisablePullup,
	PORT_enumPinOutputHigh,
	PORT_enumPinOutputLow
}PORT_enumPinConfig_t;

/********************************************************************************************/
/*									Functions' Declaration									*/
/********************************************************************************************/

/**
 *@brief : Function to Set the whole Ports' pins with what the user chose in the configuration file.
 *@param : void.
 *@return: void.
 */
void PORT_vidInit(void);

#endif 	/* PORT_H_ */
