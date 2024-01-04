/******************************************************************************
 *
 * Module: PORT Driver for Initialization of Ports
 * 			(Supports ATmega8, ATmega16, ATmega32, ATmega64, ATmega128)
 *
 * File Name: PORT.c
 *
 * Description: Driver's APIs' implementation.
 *
 * Author: Shaher Shah Abdalla Kamal
 *
 * Date: 2-12-2023
 *
 *******************************************************************************/

/* ِIncluding the .h file that contains typedefs for the primitive data types */
#include "../include/std_types.h"
/* Including the .h file that contains Driver's APIs' prototypes and typedefs' declaration. */
#include "../include/PORT.h"
/* ِIncluding the .h file that contains all configurations for compilation mode, ATmega model, and pins configurations */
#include "../include/PORT_cfg.h"
/* ِIncluding the .h file that contains Macros for the options of  */
#include "../include/PORT_private.h"

/********************************************************************************************/
/*									Global Variables									*/
/********************************************************************************************/

#if (Compilation_Mode == Post_Compilation)

#if (ATmega_Model == ATmega8)

extern PORT_enumPinConfig_t PORT_enumPinConfigArray[ATmega8_NumofPins];

#endif	/* #if (ATmega_Model == ATmega8) */

#if (ATmega_Model == ATmega16_32)

extern PORT_enumPinConfig_t PORT_enumPinConfigArray[ATmega16_32_NumofPins];

#endif	/* #if (ATmega_Model == ATmega16_32) */

#if (ATmega_Model == ATmega64_128)

extern PORT_enumPinConfig_t PORT_enumPinConfigArray[ATmega64_128_NumofPins];

#endif	/* #if (ATmega_Model == ATmega64_128) */

#endif	/* #if (Compilation_Mode == Post_Compilation) */

/********************************************************************************************/
/*									Functions' Definition									*/
/********************************************************************************************/

/**
 *@brief : Function to Set the whole Ports' pins with what the user chose in the configuration file.
 *@param : void.
 *@return: void.
 */
void PORT_vidInit(void)
{
#if (Compilation_Mode == Pre_Compilation)


#if ((ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128))

/* Setting Configuration for PORT_PINA0 */
#if (PORT_PINA0_Config == InputEnablePullUp)
#define	PORT_PINA0_Dir		0
#define PORT_PINA0_PORT		1
#elif (PORT_PINA0_Config == InputDisablePullup)
#define	PORT_PINA0_Dir		0
#define PORT_PINA0_PORT		0
#elif (PORT_PINA0_Config == OutputHigh)
#define	PORT_PINA0_Dir		1
#define PORT_PINA0_PORT		1
#elif (PORT_PINA0_Config == OutputLow)
#define	PORT_PINA0_Dir		1
#define PORT_PINA0_PORT		0
#else
#error "Invalid Configuration for PORT_PINA0_Config :("

#endif	/* #if (PORT_PINA0_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINA1 */
#if (PORT_PINA1_Config == InputEnablePullUp)
#define	PORT_PINA1_Dir		0
#define PORT_PINA1_PORT		1
#elif (PORT_PINA1_Config == InputDisablePullup)
#define	PORT_PINA1_Dir		0
#define PORT_PINA1_PORT		0
#elif (PORT_PINA1_Config == OutputHigh)
#define	PORT_PINA1_Dir		1
#define PORT_PINA1_PORT		1
#elif (PORT_PINA1_Config == OutputLow)
#define	PORT_PINA1_Dir		1
#define PORT_PINA1_PORT		0
#else
#error "Invalid Configuration for PORT_PINA1_Config :("

#endif	/* #if (PORT_PINA1_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINA2 */
#if (PORT_PINA2_Config == InputEnablePullUp)
#define	PORT_PINA2_Dir		0
#define PORT_PINA2_PORT		1
#elif (PORT_PINA2_Config == InputDisablePullup)
#define	PORT_PINA2_Dir		0
#define PORT_PINA2_PORT		0
#elif (PORT_PINA2_Config == OutputHigh)
#define	PORT_PINA2_Dir		1
#define PORT_PINA2_PORT		1
#elif (PORT_PINA2_Config == OutputLow)
#define	PORT_PINA2_Dir		1
#define PORT_PINA2_PORT		0
#else
#error "Invalid Configuration for PORT_PINA2_Config :("

#endif	/* #if (PORT_PINA2_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINA3 */
#if (PORT_PINA3_Config == InputEnablePullUp)
#define	PORT_PINA3_Dir		0
#define PORT_PINA3_PORT		1
#elif (PORT_PINA3_Config == InputDisablePullup)
#define	PORT_PINA3_Dir		0
#define PORT_PINA3_PORT		0
#elif (PORT_PINA3_Config == OutputHigh)
#define	PORT_PINA3_Dir		1
#define PORT_PINA3_PORT		1
#elif (PORT_PINA3_Config == OutputLow)
#define	PORT_PINA3_Dir		1
#define PORT_PINA3_PORT		0
#else
#error "Invalid Configuration for PORT_PINA3_Config :("

#endif	/* #if (PORT_PINA3_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINA4 */
#if (PORT_PINA4_Config == InputEnablePullUp)
#define	PORT_PINA4_Dir		0
#define PORT_PINA4_PORT		1
#elif (PORT_PINA4_Config == InputDisablePullup)
#define	PORT_PINA4_Dir		0
#define PORT_PINA4_PORT		0
#elif (PORT_PINA4_Config == OutputHigh)
#define	PORT_PINA4_Dir		1
#define PORT_PINA4_PORT		1
#elif (PORT_PINA4_Config == OutputLow)
#define	PORT_PINA4_Dir		1
#define PORT_PINA4_PORT		0
#else
#error "Invalid Configuration for PORT_PINA4_Config :("

#endif	/* #if (PORT_PINA4_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINA5 */
#if (PORT_PINA5_Config == InputEnablePullUp)
#define	PORT_PINA5_Dir		0
#define PORT_PINA5_PORT		1
#elif (PORT_PINA5_Config == InputDisablePullup)
#define	PORT_PINA5_Dir		0
#define PORT_PINA5_PORT		0
#elif (PORT_PINA5_Config == OutputHigh)
#define	PORT_PINA5_Dir		1
#define PORT_PINA5_PORT		1
#elif (PORT_PINA5_Config == OutputLow)
#define	PORT_PINA5_Dir		1
#define PORT_PINA5_PORT		0
#else
#error "Invalid Configuration for PORT_PINA5_Config :("

#endif	/* #if (PORT_PINA5_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINA6 */
#if (PORT_PINA6_Config == InputEnablePullUp)
#define	PORT_PINA6_Dir		0
#define PORT_PINA6_PORT		1
#elif (PORT_PINA6_Config == InputDisablePullup)
#define	PORT_PINA6_Dir		0
#define PORT_PINA6_PORT		0
#elif (PORT_PINA6_Config == OutputHigh)
#define	PORT_PINA6_Dir		1
#define PORT_PINA6_PORT		1
#elif (PORT_PINA6_Config == OutputLow)
#define	PORT_PINA6_Dir		1
#define PORT_PINA6_PORT		0
#else
#error "Invalid Configuration for PORT_PINA6_Config :("

#endif	/* #if (PORT_PINA6_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINA7 */
#if (PORT_PINA7_Config == InputEnablePullUp)
#define	PORT_PINA7_Dir		0
#define PORT_PINA7_PORT		1
#elif (PORT_PINA7_Config == InputDisablePullup)
#define	PORT_PINA7_Dir		0
#define PORT_PINA7_PORT		0
#elif (PORT_PINA7_Config == OutputHigh)
#define	PORT_PINA7_Dir		1
#define PORT_PINA7_PORT		1
#elif (PORT_PINA7_Config == OutputLow)
#define	PORT_PINA7_Dir		1
#define PORT_PINA7_PORT		0
#else
#error "Invalid Configuration for PORT_PINA7_Config :("

#endif	/* #if (PORT_PINA7_Config == InputEnablePullUp) */


	DDRA = CONCAT(PORT_PINA7_Dir,PORT_PINA6_Dir,PORT_PINA5_Dir,PORT_PINA4_Dir,PORT_PINA3_Dir,PORT_PINA2_Dir,PORT_PINA1_Dir,PORT_PINA0_Dir);
	PORTA = CONCAT(PORT_PINA7_PORT,PORT_PINA6_PORT,PORT_PINA5_PORT,PORT_PINA4_PORT,PORT_PINA3_PORT,PORT_PINA2_PORT,PORT_PINA1_PORT,PORT_PINA0_PORT);

#endif	/* #if ((ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128)) */

#if ((ATmega_Model == ATmega8) || (ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128))

/* Setting Configuration for PORT_PINB0 */
#if (PORT_PINB0_Config == InputEnablePullUp)
#define	PORT_PINB0_Dir		0
#define PORT_PINB0_PORT		1
#elif (PORT_PINB0_Config == InputDisablePullup)
#define	PORT_PINB0_Dir		0
#define PORT_PINB0_PORT		0
#elif (PORT_PINB0_Config == OutputHigh)
#define	PORT_PINB0_Dir		1
#define PORT_PINB0_PORT		1
#elif (PORT_PINB0_Config == OutputLow)
#define	PORT_PINB0_Dir		1
#define PORT_PINB0_PORT		0
#else
#error "Invalid Configuration for PORT_PINB0_Config :("

#endif	/* #if (PORT_PINB0_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINB1 */
#if (PORT_PINB1_Config == InputEnablePullUp)
#define	PORT_PINB1_Dir		0
#define PORT_PINB1_PORT		1
#elif (PORT_PINB1_Config == InputDisablePullup)
#define	PORT_PINB1_Dir		0
#define PORT_PINB1_PORT		0
#elif (PORT_PINB1_Config == OutputHigh)
#define	PORT_PINB1_Dir		1
#define PORT_PINB1_PORT		1
#elif (PORT_PINB1_Config == OutputLow)
#define	PORT_PINB1_Dir		1
#define PORT_PINB1_PORT		0
#else
#error "Invalid Configuration for PORT_PINB1_Config :("

#endif	/* #if (PORT_PINB1_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINB2 */
#if (PORT_PINB2_Config == InputEnablePullUp)
#define	PORT_PINB2_Dir		0
#define PORT_PINB2_PORT		1
#elif (PORT_PINB2_Config == InputDisablePullup)
#define	PORT_PINB2_Dir		0
#define PORT_PINB2_PORT		0
#elif (PORT_PINB2_Config == OutputHigh)
#define	PORT_PINB2_Dir		1
#define PORT_PINB2_PORT		1
#elif (PORT_PINB2_Config == OutputLow)
#define	PORT_PINB2_Dir		1
#define PORT_PINB2_PORT		0
#else
#error "Invalid Configuration for PORT_PINB2_Config :("

#endif	/* #if (PORT_PINB2_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINB3 */
#if (PORT_PINB3_Config == InputEnablePullUp)
#define	PORT_PINB3_Dir		0
#define PORT_PINB3_PORT		1
#elif (PORT_PINB3_Config == InputDisablePullup)
#define	PORT_PINB3_Dir		0
#define PORT_PINB3_PORT		0
#elif (PORT_PINB3_Config == OutputHigh)
#define	PORT_PINB3_Dir		1
#define PORT_PINB3_PORT		1
#elif (PORT_PINB3_Config == OutputLow)
#define	PORT_PINB3_Dir		1
#define PORT_PINB3_PORT		0
#else
#error "Invalid Configuration for PORT_PINB3_Config :("

#endif	/* #if (PORT_PINB3_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINB4 */
#if (PORT_PINB4_Config == InputEnablePullUp)
#define	PORT_PINB4_Dir		0
#define PORT_PINB4_PORT		1
#elif (PORT_PINB4_Config == InputDisablePullup)
#define	PORT_PINB4_Dir		0
#define PORT_PINB4_PORT		0
#elif (PORT_PINB4_Config == OutputHigh)
#define	PORT_PINB4_Dir		1
#define PORT_PINB4_PORT		1
#elif (PORT_PINB4_Config == OutputLow)
#define	PORT_PINB4_Dir		1
#define PORT_PINB4_PORT		0
#else
#error "Invalid Configuration for PORT_PINB4_Config :("

#endif	/* #if (PORT_PINB4_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINB5 */
#if (PORT_PINB5_Config == InputEnablePullUp)
#define	PORT_PINB5_Dir		0
#define PORT_PINB5_PORT		1
#elif (PORT_PINB5_Config == InputDisablePullup)
#define	PORT_PINB5_Dir		0
#define PORT_PINB5_PORT		0
#elif (PORT_PINB5_Config == OutputHigh)
#define	PORT_PINB5_Dir		1
#define PORT_PINB5_PORT		1
#elif (PORT_PINB5_Config == OutputLow)
#define	PORT_PINB5_Dir		1
#define PORT_PINB5_PORT		0
#else
#error "Invalid Configuration for PORT_PINB5_Config :("

#endif	/* #if (PORT_PINB5_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINB6 */
#if (PORT_PINB6_Config == InputEnablePullUp)
#define	PORT_PINB6_Dir		0
#define PORT_PINB6_PORT		1
#elif (PORT_PINB6_Config == InputDisablePullup)
#define	PORT_PINB6_Dir		0
#define PORT_PINB6_PORT		0
#elif (PORT_PINB6_Config == OutputHigh)
#define	PORT_PINB6_Dir		1
#define PORT_PINB6_PORT		1
#elif (PORT_PINB6_Config == OutputLow)
#define	PORT_PINB6_Dir		1
#define PORT_PINB6_PORT		0
#else
#error "Invalid Configuration for PORT_PINB6_Config :("

#endif	/* #if (PORT_PINB6_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINB7 */
#if (PORT_PINB7_Config == InputEnablePullUp)
#define	PORT_PINB7_Dir		0
#define PORT_PINB7_PORT		1
#elif (PORT_PINB7_Config == InputDisablePullup)
#define	PORT_PINB7_Dir		0
#define PORT_PINB7_PORT		0
#elif (PORT_PINB7_Config == OutputHigh)
#define	PORT_PINB7_Dir		1
#define PORT_PINB7_PORT		1
#elif (PORT_PINB7_Config == OutputLow)
#define	PORT_PINB7_Dir		1
#define PORT_PINB7_PORT		0
#else
#error "Invalid Configuration for PORT_PINB7_Config :("

#endif	/* #if (PORT_PINB7_Config == InputEnablePullUp) */


	DDRB = CONCAT(PORT_PINB7_Dir,PORT_PINB6_Dir,PORT_PINB5_Dir,PORT_PINB4_Dir,PORT_PINB3_Dir,PORT_PINB2_Dir,PORT_PINB1_Dir,PORT_PINB0_Dir);
	PORTB = CONCAT(PORT_PINB7_PORT,PORT_PINB6_PORT,PORT_PINB5_PORT,PORT_PINB4_PORT,PORT_PINB3_PORT,PORT_PINB2_PORT,PORT_PINB1_PORT,PORT_PINB0_PORT);


/* Setting Configuration for PORT_PINC0 */
#if (PORT_PINC0_Config == InputEnablePullUp)
#define	PORT_PINC0_Dir		0
#define PORT_PINC0_PORT		1
#elif (PORT_PINC0_Config == InputDisablePullup)
#define	PORT_PINC0_Dir		0
#define PORT_PINC0_PORT		0
#elif (PORT_PINC0_Config == OutputHigh)
#define	PORT_PINC0_Dir		1
#define PORT_PINC0_PORT		1
#elif (PORT_PINC0_Config == OutputLow)
#define	PORT_PINC0_Dir		1
#define PORT_PINC0_PORT		0
#else
#error "Invalid Configuration for PORT_PINC0_Config :("

#endif	/* #if (PORT_PINC0_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINC1 */
#if (PORT_PINC1_Config == InputEnablePullUp)
#define	PORT_PINC1_Dir		0
#define PORT_PINC1_PORT		1
#elif (PORT_PINC1_Config == InputDisablePullup)
#define	PORT_PINC1_Dir		0
#define PORT_PINC1_PORT		0
#elif (PORT_PINC1_Config == OutputHigh)
#define	PORT_PINC1_Dir		1
#define PORT_PINC1_PORT		1
#elif (PORT_PINC1_Config == OutputLow)
#define	PORT_PINC1_Dir		1
#define PORT_PINC1_PORT		0
#else
#error "Invalid Configuration for PORT_PINC1_Config :("

#endif	/* #if (PORT_PINC1_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINC2 */
#if (PORT_PINC2_Config == InputEnablePullUp)
#define	PORT_PINC2_Dir		0
#define PORT_PINC2_PORT		1
#elif (PORT_PINC2_Config == InputDisablePullup)
#define	PORT_PINC2_Dir		0
#define PORT_PINC2_PORT		0
#elif (PORT_PINC2_Config == OutputHigh)
#define	PORT_PINC2_Dir		1
#define PORT_PINC2_PORT		1
#elif (PORT_PINC2_Config == OutputLow)
#define	PORT_PINC2_Dir		1
#define PORT_PINC2_PORT		0
#else
#error "Invalid Configuration for PORT_PINC2_Config :("

#endif	/* #if (PORT_PINC2_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINC3 */
#if (PORT_PINC3_Config == InputEnablePullUp)
#define	PORT_PINC3_Dir		0
#define PORT_PINC3_PORT		1
#elif (PORT_PINC3_Config == InputDisablePullup)
#define	PORT_PINC3_Dir		0
#define PORT_PINC3_PORT		0
#elif (PORT_PINC3_Config == OutputHigh)
#define	PORT_PINC3_Dir		1
#define PORT_PINC3_PORT		1
#elif (PORT_PINC3_Config == OutputLow)
#define	PORT_PINC3_Dir		1
#define PORT_PINC3_PORT		0
#else
#error "Invalid Configuration for PORT_PINC3_Config :("

#endif	/* #if (PORT_PINC3_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINC4 */
#if (PORT_PINC4_Config == InputEnablePullUp)
#define	PORT_PINC4_Dir		0
#define PORT_PINC4_PORT		1
#elif (PORT_PINC4_Config == InputDisablePullup)
#define	PORT_PINC4_Dir		0
#define PORT_PINC4_PORT		0
#elif (PORT_PINC4_Config == OutputHigh)
#define	PORT_PINC4_Dir		1
#define PORT_PINC4_PORT		1
#elif (PORT_PINC4_Config == OutputLow)
#define	PORT_PINC4_Dir		1
#define PORT_PINC4_PORT		0
#else
#error "Invalid Configuration for PORT_PINC4_Config :("

#endif	/* #if (PORT_PINC4_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINC5 */
#if (PORT_PINC5_Config == InputEnablePullUp)
#define	PORT_PINC5_Dir		0
#define PORT_PINC5_PORT		1
#elif (PORT_PINC5_Config == InputDisablePullup)
#define	PORT_PINC5_Dir		0
#define PORT_PINC5_PORT		0
#elif (PORT_PINC5_Config == OutputHigh)
#define	PORT_PINC5_Dir		1
#define PORT_PINC5_PORT		1
#elif (PORT_PINC5_Config == OutputLow)
#define	PORT_PINC5_Dir		1
#define PORT_PINC5_PORT		0
#else
#error "Invalid Configuration for PORT_PINC5_Config :("

#endif	/* #if (PORT_PINC5_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINC6 */
#if (PORT_PINC6_Config == InputEnablePullUp)
#define	PORT_PINC6_Dir		0
#define PORT_PINC6_PORT		1
#elif (PORT_PINC6_Config == InputDisablePullup)
#define	PORT_PINC6_Dir		0
#define PORT_PINC6_PORT		0
#elif (PORT_PINC6_Config == OutputHigh)
#define	PORT_PINC6_Dir		1
#define PORT_PINC6_PORT		1
#elif (PORT_PINC6_Config == OutputLow)
#define	PORT_PINC6_Dir		1
#define PORT_PINC6_PORT		0
#else
#error "Invalid Configuration for PORT_PINC6_Config :("

#endif	/* #if (PORT_PINC6_Config == InputEnablePullUp) */

#if (ATmega_Model == ATmega8)
	DDRC = CONCAT(0,PORT_PINC6_Dir,PORT_PINC5_Dir,PORT_PINC4_Dir,PORT_PINC3_Dir,PORT_PINC2_Dir,PORT_PINC1_Dir,PORT_PINC0_Dir);
	PORTC = CONCAT(0,PORT_PINC6_PORT,PORT_PINC5_PORT,PORT_PINC4_PORT,PORT_PINC3_PORT,PORT_PINC2_PORT,PORT_PINC1_PORT,PORT_PINC0_PORT);

#endif

#endif	/* #if ((ATmega_Model == ATmega8) || (ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128)) */

#if ((ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128))

/* Setting Configuration for PORT_PINC7 */
#if (PORT_PINC7_Config == InputEnablePullUp)
#define	PORT_PINC7_Dir		0
#define PORT_PINC7_PORT		1
#elif (PORT_PINC7_Config == InputDisablePullup)
#define	PORT_PINC7_Dir		0
#define PORT_PINC7_PORT		0
#elif (PORT_PINC7_Config == OutputHigh)
#define	PORT_PINC7_Dir		1
#define PORT_PINC7_PORT		1
#elif (PORT_PINC7_Config == OutputLow)
#define	PORT_PINC7_Dir		1
#define PORT_PINC7_PORT		0
#else
#error "Invalid Configuration for PORT_PINC7_Config :("

#endif	/* #if (PORT_PINC7_Config == InputEnablePullUp) */

	DDRC = CONCAT(PORT_PINC7_Dir,PORT_PINC6_Dir,PORT_PINC5_Dir,PORT_PINC4_Dir,PORT_PINC3_Dir,PORT_PINC2_Dir,PORT_PINC1_Dir,PORT_PINC0_Dir);
	PORTC = CONCAT(PORT_PINC7_PORT,PORT_PINC6_PORT,PORT_PINC5_PORT,PORT_PINC4_PORT,PORT_PINC3_PORT,PORT_PINC2_PORT,PORT_PINC1_PORT,PORT_PINC0_PORT);

#endif	/* #if ((ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128)) */

#if ((ATmega_Model == ATmega8) || (ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128))

/* Setting Configuration for PORT_PIND0 */
#if (PORT_PIND0_Config == InputEnablePullUp)
#define	PORT_PIND0_Dir		0
#define PORT_PIND0_PORT		1
#elif (PORT_PIND0_Config == InputDisablePullup)
#define	PORT_PIND0_Dir		0
#define PORT_PIND0_PORT		0
#elif (PORT_PIND0_Config == OutputHigh)
#define	PORT_PIND0_Dir		1
#define PORT_PIND0_PORT		1
#elif (PORT_PIND0_Config == OutputLow)
#define	PORT_PIND0_Dir		1
#define PORT_PIND0_PORT		0
#else
#error "Invalid Configuration for PORT_PIND0_Config :("

#endif	/* #if (PORT_PIND0_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PIND1 */
#if (PORT_PIND1_Config == InputEnablePullUp)
#define	PORT_PIND1_Dir		0
#define PORT_PIND1_PORT		1
#elif (PORT_PIND1_Config == InputDisablePullup)
#define	PORT_PIND1_Dir		0
#define PORT_PIND1_PORT		0
#elif (PORT_PIND1_Config == OutputHigh)
#define	PORT_PIND1_Dir		1
#define PORT_PIND1_PORT		1
#elif (PORT_PIND1_Config == OutputLow)
#define	PORT_PIND1_Dir		1
#define PORT_PIND1_PORT		0
#else
#error "Invalid Configuration for PORT_PIND1_Config :("

#endif	/* #if (PORT_PIND1_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PIND2 */
#if (PORT_PIND2_Config == InputEnablePullUp)
#define	PORT_PIND2_Dir		0
#define PORT_PIND2_PORT		1
#elif (PORT_PIND2_Config == InputDisablePullup)
#define	PORT_PIND2_Dir		0
#define PORT_PIND2_PORT		0
#elif (PORT_PIND2_Config == OutputHigh)
#define	PORT_PIND2_Dir		1
#define PORT_PIND2_PORT		1
#elif (PORT_PIND2_Config == OutputLow)
#define	PORT_PIND2_Dir		1
#define PORT_PIND2_PORT		0
#else
#error "Invalid Configuration for PORT_PIND2_Config :("

#endif	/* #if (PORT_PIND2_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PIND3 */
#if (PORT_PIND3_Config == InputEnablePullUp)
#define	PORT_PIND3_Dir		0
#define PORT_PIND3_PORT		1
#elif (PORT_PIND3_Config == InputDisablePullup)
#define	PORT_PIND3_Dir		0
#define PORT_PIND3_PORT		0
#elif (PORT_PIND3_Config == OutputHigh)
#define	PORT_PIND3_Dir		1
#define PORT_PIND3_PORT		1
#elif (PORT_PIND3_Config == OutputLow)
#define	PORT_PIND3_Dir		1
#define PORT_PIND3_PORT		0
#else
#error "Invalid Configuration for PORT_PIND3_Config :("

#endif	/* #if (PORT_PIND3_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PIND4 */
#if (PORT_PIND4_Config == InputEnablePullUp)
#define	PORT_PIND4_Dir		0
#define PORT_PIND4_PORT		1
#elif (PORT_PIND4_Config == InputDisablePullup)
#define	PORT_PIND4_Dir		0
#define PORT_PIND4_PORT		0
#elif (PORT_PIND4_Config == OutputHigh)
#define	PORT_PIND4_Dir		1
#define PORT_PIND4_PORT		1
#elif (PORT_PIND4_Config == OutputLow)
#define	PORT_PIND4_Dir		1
#define PORT_PIND4_PORT		0
#else
#error "Invalid Configuration for PORT_PIND4_Config :("

#endif	/* #if (PORT_PIND4_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PIND5 */
#if (PORT_PIND5_Config == InputEnablePullUp)
#define	PORT_PIND5_Dir		0
#define PORT_PIND5_PORT		1
#elif (PORT_PIND5_Config == InputDisablePullup)
#define	PORT_PIND5_Dir		0
#define PORT_PIND5_PORT		0
#elif (PORT_PIND5_Config == OutputHigh)
#define	PORT_PIND5_Dir		1
#define PORT_PIND5_PORT		1
#elif (PORT_PIND5_Config == OutputLow)
#define	PORT_PIND5_Dir		1
#define PORT_PIND5_PORT		0
#else
#error "Invalid Configuration for PORT_PIND5_Config :("

#endif	/* #if (PORT_PIND5_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PIND6 */
#if (PORT_PIND6_Config == InputEnablePullUp)
#define	PORT_PIND6_Dir		0
#define PORT_PIND6_PORT		1
#elif (PORT_PIND6_Config == InputDisablePullup)
#define	PORT_PIND6_Dir		0
#define PORT_PIND6_PORT		0
#elif (PORT_PIND6_Config == OutputHigh)
#define	PORT_PIND6_Dir		1
#define PORT_PIND6_PORT		1
#elif (PORT_PIND6_Config == OutputLow)
#define	PORT_PIND6_Dir		1
#define PORT_PIND6_PORT		0
#else
#error "Invalid Configuration for PORT_PIND6_Config :("

#endif	/* #if (PORT_PIND6_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PIND7 */
#if (PORT_PIND7_Config == InputEnablePullUp)
#define	PORT_PIND7_Dir		0
#define PORT_PIND7_PORT		1
#elif (PORT_PIND7_Config == InputDisablePullup)
#define	PORT_PIND7_Dir		0
#define PORT_PIND7_PORT		0
#elif (PORT_PIND7_Config == OutputHigh)
#define	PORT_PIND7_Dir		1
#define PORT_PIND7_PORT		1
#elif (PORT_PIND7_Config == OutputLow)
#define	PORT_PIND7_Dir		1
#define PORT_PIND7_PORT		0
#else
#error "Invalid Configuration for PORT_PIND7_Config :("

#endif	/* #if (PORT_PIND7_Config == InputEnablePullUp) */


	DDRD = CONCAT(PORT_PIND7_Dir,PORT_PIND6_Dir,PORT_PIND5_Dir,PORT_PIND4_Dir,PORT_PIND3_Dir,PORT_PIND2_Dir,PORT_PIND1_Dir,PORT_PIND0_Dir);
	PORTD = CONCAT(PORT_PIND7_PORT,PORT_PIND6_PORT,PORT_PIND5_PORT,PORT_PIND4_PORT,PORT_PIND3_PORT,PORT_PIND2_PORT,PORT_PIND1_PORT,PORT_PIND0_PORT);

#endif	/* #if ((ATmega_Model == ATmega8) || (ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128)) */


#if (ATmega_Model == ATmega64_128)

/* Setting Configuration for PORT_PINE0 */
#if (PORT_PINE0_Config == InputEnablePullUp)
#define	PORT_PINE0_Dir		0
#define PORT_PINE0_PORT		1
#elif (PORT_PINE0_Config == InputDisablePullup)
#define	PORT_PINE0_Dir		0
#define PORT_PINE0_PORT		0
#elif (PORT_PINE0_Config == OutputHigh)
#define	PORT_PINE0_Dir		1
#define PORT_PINE0_PORT		1
#elif (PORT_PINE0_Config == OutputLow)
#define	PORT_PINE0_Dir		1
#define PORT_PINE0_PORT		0
#else
#error "Invalid Configuration for PORT_PINE0_Config :("

#endif	/* #if (PORT_PINE0_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINE1 */
#if (PORT_PINE1_Config == InputEnablePullUp)
#define	PORT_PINE1_Dir		0
#define PORT_PINE1_PORT		1
#elif (PORT_PINE1_Config == InputDisablePullup)
#define	PORT_PINE1_Dir		0
#define PORT_PINE1_PORT		0
#elif (PORT_PINE1_Config == OutputHigh)
#define	PORT_PINE1_Dir		1
#define PORT_PINE1_PORT		1
#elif (PORT_PINE1_Config == OutputLow)
#define	PORT_PINE1_Dir		1
#define PORT_PINE1_PORT		0
#else
#error "Invalid Configuration for PORT_PINE1_Config :("

#endif	/* #if (PORT_PINE1_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINE2 */
#if (PORT_PINE2_Config == InputEnablePullUp)
#define	PORT_PINE2_Dir		0
#define PORT_PINE2_PORT		1
#elif (PORT_PINE2_Config == InputDisablePullup)
#define	PORT_PINE2_Dir		0
#define PORT_PINE2_PORT		0
#elif (PORT_PINE2_Config == OutputHigh)
#define	PORT_PINE2_Dir		1
#define PORT_PINE2_PORT		1
#elif (PORT_PINE2_Config == OutputLow)
#define	PORT_PINE2_Dir		1
#define PORT_PINE2_PORT		0
#else
#error "Invalid Configuration for PORT_PINE2_Config :("

#endif	/* #if (PORT_PINE2_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINE3 */
#if (PORT_PINE3_Config == InputEnablePullUp)
#define	PORT_PINE3_Dir		0
#define PORT_PINE3_PORT		1
#elif (PORT_PINE3_Config == InputDisablePullup)
#define	PORT_PINE3_Dir		0
#define PORT_PINE3_PORT		0
#elif (PORT_PINE3_Config == OutputHigh)
#define	PORT_PINE3_Dir		1
#define PORT_PINE3_PORT		1
#elif (PORT_PINE3_Config == OutputLow)
#define	PORT_PINE3_Dir		1
#define PORT_PINE3_PORT		0
#else
#error "Invalid Configuration for PORT_PINE3_Config :("

#endif	/* #if (PORT_PINE3_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINE4 */
#if (PORT_PINE4_Config == InputEnablePullUp)
#define	PORT_PINE4_Dir		0
#define PORT_PINE4_PORT		1
#elif (PORT_PINE4_Config == InputDisablePullup)
#define	PORT_PINE4_Dir		0
#define PORT_PINE4_PORT		0
#elif (PORT_PINE4_Config == OutputHigh)
#define	PORT_PINE4_Dir		1
#define PORT_PINE4_PORT		1
#elif (PORT_PINE4_Config == OutputLow)
#define	PORT_PINE4_Dir		1
#define PORT_PINE4_PORT		0
#else
#error "Invalid Configuration for PORT_PINE4_Config :("

#endif	/* #if (PORT_PINE4_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINE5 */
#if (PORT_PINE5_Config == InputEnablePullUp)
#define	PORT_PINE5_Dir		0
#define PORT_PINE5_PORT		1
#elif (PORT_PINE5_Config == InputDisablePullup)
#define	PORT_PINE5_Dir		0
#define PORT_PINE5_PORT		0
#elif (PORT_PINE5_Config == OutputHigh)
#define	PORT_PINE5_Dir		1
#define PORT_PINE5_PORT		1
#elif (PORT_PINE5_Config == OutputLow)
#define	PORT_PINE5_Dir		1
#define PORT_PINE5_PORT		0
#else
#error "Invalid Configuration for PORT_PINE5_Config :("

#endif	/* #if (PORT_PINE5_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINE6 */
#if (PORT_PINE6_Config == InputEnablePullUp)
#define	PORT_PINE6_Dir		0
#define PORT_PINE6_PORT		1
#elif (PORT_PINE6_Config == InputDisablePullup)
#define	PORT_PINE6_Dir		0
#define PORT_PINE6_PORT		0
#elif (PORT_PINE6_Config == OutputHigh)
#define	PORT_PINE6_Dir		1
#define PORT_PINE6_PORT		1
#elif (PORT_PINE6_Config == OutputLow)
#define	PORT_PINE6_Dir		1
#define PORT_PINE6_PORT		0
#else
#error "Invalid Configuration for PORT_PINE6_Config :("

#endif	/* #if (PORT_PINE6_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINE7 */
#if (PORT_PINE7_Config == InputEnablePullUp)
#define	PORT_PINE7_Dir		0
#define PORT_PINE7_PORT		1
#elif (PORT_PINE7_Config == InputDisablePullup)
#define	PORT_PINE7_Dir		0
#define PORT_PINE7_PORT		0
#elif (PORT_PINE7_Config == OutputHigh)
#define	PORT_PINE7_Dir		1
#define PORT_PINE7_PORT		1
#elif (PORT_PINE7_Config == OutputLow)
#define	PORT_PINE7_Dir		1
#define PORT_PINE7_PORT		0
#else
#error "Invalid Configuration for PORT_PINE7_Config :("

#endif	/* #if (PORT_PINE7_Config == InputEnablePullUp) */


	DDRE = CONCAT(PORT_PINE7_Dir,PORT_PINE6_Dir,PORT_PINE5_Dir,PORT_PINE4_Dir,PORT_PINE3_Dir,PORT_PINE2_Dir,PORT_PINE1_Dir,PORT_PINE0_Dir);
	PORTE = CONCAT(PORT_PINE7_PORT,PORT_PINE6_PORT,PORT_PINE5_PORT,PORT_PINE4_PORT,PORT_PINE3_PORT,PORT_PINE2_PORT,PORT_PINE1_PORT,PORT_PINE0_PORT);

/* Setting Configuration for PORT_PINF0 */
#if (PORT_PINF0_Config == InputEnablePullUp)
#define	PORT_PINF0_Dir		0
#define PORT_PINF0_PORT		1
#elif (PORT_PINF0_Config == InputDisablePullup)
#define	PORT_PINF0_Dir		0
#define PORT_PINF0_PORT		0
#elif (PORT_PINF0_Config == OutputHigh)
#define	PORT_PINF0_Dir		1
#define PORT_PINF0_PORT		1
#elif (PORT_PINF0_Config == OutputLow)
#define	PORT_PINF0_Dir		1
#define PORT_PINF0_PORT		0
#else
#error "Invalid Configuration for PORT_PINF0_Config :("

#endif	/* #if (PORT_PINF0_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINF1 */
#if (PORT_PINF1_Config == InputEnablePullUp)
#define	PORT_PINF1_Dir		0
#define PORT_PINF1_PORT		1
#elif (PORT_PINF1_Config == InputDisablePullup)
#define	PORT_PINF1_Dir		0
#define PORT_PINF1_PORT		0
#elif (PORT_PINF1_Config == OutputHigh)
#define	PORT_PINF1_Dir		1
#define PORT_PINF1_PORT		1
#elif (PORT_PINF1_Config == OutputLow)
#define	PORT_PINF1_Dir		1
#define PORT_PINF1_PORT		0
#else
#error "Invalid Configuration for PORT_PINF1_Config :("

#endif	/* #if (PORT_PINF1_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINF2 */
#if (PORT_PINF2_Config == InputEnablePullUp)
#define	PORT_PINF2_Dir		0
#define PORT_PINF2_PORT		1
#elif (PORT_PINF2_Config == InputDisablePullup)
#define	PORT_PINF2_Dir		0
#define PORT_PINF2_PORT		0
#elif (PORT_PINF2_Config == OutputHigh)
#define	PORT_PINF2_Dir		1
#define PORT_PINF2_PORT		1
#elif (PORT_PINF2_Config == OutputLow)
#define	PORT_PINF2_Dir		1
#define PORT_PINF2_PORT		0
#else
#error "Invalid Configuration for PORT_PINF2_Config :("

#endif	/* #if (PORT_PINF2_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINF3 */
#if (PORT_PINF3_Config == InputEnablePullUp)
#define	PORT_PINF3_Dir		0
#define PORT_PINF3_PORT		1
#elif (PORT_PINF3_Config == InputDisablePullup)
#define	PORT_PINF3_Dir		0
#define PORT_PINF3_PORT		0
#elif (PORT_PINF3_Config == OutputHigh)
#define	PORT_PINF3_Dir		1
#define PORT_PINF3_PORT		1
#elif (PORT_PINF3_Config == OutputLow)
#define	PORT_PINF3_Dir		1
#define PORT_PINF3_PORT		0
#else
#error "Invalid Configuration for PORT_PINF3_Config :("

#endif	/* #if (PORT_PINF3_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINF4 */
#if (PORT_PINF4_Config == InputEnablePullUp)
#define	PORT_PINF4_Dir		0
#define PORT_PINF4_PORT		1
#elif (PORT_PINF4_Config == InputDisablePullup)
#define	PORT_PINF4_Dir		0
#define PORT_PINF4_PORT		0
#elif (PORT_PINF4_Config == OutputHigh)
#define	PORT_PINF4_Dir		1
#define PORT_PINF4_PORT		1
#elif (PORT_PINF4_Config == OutputLow)
#define	PORT_PINF4_Dir		1
#define PORT_PINF4_PORT		0
#else
#error "Invalid Configuration for PORT_PINF4_Config :("

#endif	/* #if (PORT_PINF4_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINF5 */
#if (PORT_PINF5_Config == InputEnablePullUp)
#define	PORT_PINF5_Dir		0
#define PORT_PINF5_PORT		1
#elif (PORT_PINF5_Config == InputDisablePullup)
#define	PORT_PINF5_Dir		0
#define PORT_PINF5_PORT		0
#elif (PORT_PINF5_Config == OutputHigh)
#define	PORT_PINF5_Dir		1
#define PORT_PINF5_PORT		1
#elif (PORT_PINF5_Config == OutputLow)
#define	PORT_PINF5_Dir		1
#define PORT_PINF5_PORT		0
#else
#error "Invalid Configuration for PORT_PINF5_Config :("

#endif	/* #if (PORT_PINF5_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINF6 */
#if (PORT_PINF6_Config == InputEnablePullUp)
#define	PORT_PINF6_Dir		0
#define PORT_PINF6_PORT		1
#elif (PORT_PINF6_Config == InputDisablePullup)
#define	PORT_PINF6_Dir		0
#define PORT_PINF6_PORT		0
#elif (PORT_PINF6_Config == OutputHigh)
#define	PORT_PINF6_Dir		1
#define PORT_PINF6_PORT		1
#elif (PORT_PINF6_Config == OutputLow)
#define	PORT_PINF6_Dir		1
#define PORT_PINF6_PORT		0
#else
#error "Invalid Configuration for PORT_PINF6_Config :("

#endif	/* #if (PORT_PINF6_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PINF7 */
#if (PORT_PINF7_Config == InputEnablePullUp)
#define	PORT_PINF7_Dir		0
#define PORT_PINF7_PORT		1
#elif (PORT_PINF7_Config == InputDisablePullup)
#define	PORT_PINF7_Dir		0
#define PORT_PINF7_PORT		0
#elif (PORT_PINF7_Config == OutputHigh)
#define	PORT_PINF7_Dir		1
#define PORT_PINF7_PORT		1
#elif (PORT_PINF7_Config == OutputLow)
#define	PORT_PINF7_Dir		1
#define PORT_PINF7_PORT		0
#else
#error "Invalid Configuration for PORT_PINF7_Config :("

#endif	/* #if (PORT_PINF7_Config == InputEnablePullUp) */

	DDRF = CONCAT(PORT_PINF7_Dir,PORT_PINF6_Dir,PORT_PINF5_Dir,PORT_PINF4_Dir,PORT_PINF3_Dir,PORT_PINF2_Dir,PORT_PINF1_Dir,PORT_PINF0_Dir);
	PORTF = CONCAT(PORT_PINF7_PORT,PORT_PINF6_PORT,PORT_PINF5_PORT,PORT_PINF4_PORT,PORT_PINF3_PORT,PORT_PINF2_PORT,PORT_PINF1_PORT,PORT_PINF0_PORT);

/* Setting Configuration for PORT_PING0 */
#if (PORT_PING0_Config == InputEnablePullUp)
#define	PORT_PING0_Dir		0
#define PORT_PING0_PORT		1
#elif (PORT_PING0_Config == InputDisablePullup)
#define	PORT_PING0_Dir		0
#define PORT_PING0_PORT		0
#elif (PORT_PING0_Config == OutputHigh)
#define	PORT_PING0_Dir		1
#define PORT_PING0_PORT		1
#elif (PORT_PING0_Config == OutputLow)
#define	PORT_PING0_Dir		1
#define PORT_PING0_PORT		0
#else
#error "Invalid Configuration for PORT_PING0_Config :("

#endif	/* #if (PORT_PING0_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PING1 */
#if (PORT_PING1_Config == InputEnablePullUp)
#define	PORT_PING1_Dir		0
#define PORT_PING1_PORT		1
#elif (PORT_PING1_Config == InputDisablePullup)
#define	PORT_PING1_Dir		0
#define PORT_PING1_PORT		0
#elif (PORT_PING1_Config == OutputHigh)
#define	PORT_PING1_Dir		1
#define PORT_PING1_PORT		1
#elif (PORT_PING1_Config == OutputLow)
#define	PORT_PING1_Dir		1
#define PORT_PING1_PORT		0
#else
#error "Invalid Configuration for PORT_PING1_Config :("

#endif	/* #if (PORT_PING1_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PING2 */
#if (PORT_PING2_Config == InputEnablePullUp)
#define	PORT_PING2_Dir		0
#define PORT_PING2_PORT		1
#elif (PORT_PING2_Config == InputDisablePullup)
#define	PORT_PING2_Dir		0
#define PORT_PING2_PORT		0
#elif (PORT_PING2_Config == OutputHigh)
#define	PORT_PING2_Dir		1
#define PORT_PING2_PORT		1
#elif (PORT_PING2_Config == OutputLow)
#define	PORT_PING2_Dir		1
#define PORT_PING2_PORT		0
#else
#error "Invalid Configuration for PORT_PING2_Config :("

#endif	/* #if (PORT_PING2_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PING3 */
#if (PORT_PING3_Config == InputEnablePullUp)
#define	PORT_PING3_Dir		0
#define PORT_PING3_PORT		1
#elif (PORT_PING3_Config == InputDisablePullup)
#define	PORT_PING3_Dir		0
#define PORT_PING3_PORT		0
#elif (PORT_PING3_Config == OutputHigh)
#define	PORT_PING3_Dir		1
#define PORT_PING3_PORT		1
#elif (PORT_PING3_Config == OutputLow)
#define	PORT_PING3_Dir		1
#define PORT_PING3_PORT		0
#else
#error "Invalid Configuration for PORT_PING3_Config :("

#endif	/* #if (PORT_PING3_Config == InputEnablePullUp) */

/* Setting Configuration for PORT_PING4 */
#if (PORT_PING4_Config == InputEnablePullUp)
#define	PORT_PING4_Dir		0
#define PORT_PING4_PORT		1
#elif (PORT_PING4_Config == InputDisablePullup)
#define	PORT_PING4_Dir		0
#define PORT_PING4_PORT		0
#elif (PORT_PING4_Config == OutputHigh)
#define	PORT_PING4_Dir		1
#define PORT_PING4_PORT		1
#elif (PORT_PING4_Config == OutputLow)
#define	PORT_PING4_Dir		1
#define PORT_PING4_PORT		0
#else
#error "Invalid Configuration for PORT_PING4_Config :("

#endif	/* #if (PORT_PING4_Config == InputEnablePullUp) */

	DDRG = CONCAT(PORT_PING7_Dir,PORT_PING6_Dir,PORT_PING5_Dir,PORT_PING4_Dir,PORT_PING3_Dir,PORT_PING2_Dir,PORT_PING1_Dir,PORT_PING0_Dir);
	PORTG = CONCAT(PORT_PING7_PORT,PORT_PING6_PORT,PORT_PING5_PORT,PORT_PING4_PORT,PORT_PING3_PORT,PORT_PING2_PORT,PORT_PING1_PORT,PORT_PING0_PORT);

#endif	/* #if (ATmega_Model == ATmega64_128) */


#elif (Compilation_Mode == Post_Compilation)

#if (ATmega_Model == ATmega8)

	for (uint8 counter = 0; counter < ATmega8_NumofPins; counter++)
	{
		if (PORT_enumPinConfigArray[counter] == PORT_enumPinInputEnablePullUp)
		{
			if (counter <= 7)
			{
				DDRB &= ~(1<<counter);
				PORTB |= (1<<counter);
			}
			else if (counter <= 14)
			{
				DDRC &= ~(1<<(counter%8));
				PORTC |= (1<<(counter%8));
			}
			else if (counter < ATmega8_NumofPins)
			{
				DDRD &= ~(1<<(counter%15));
				PORTD |= (1<<(counter%15));
			}
			else
			{

			}
		}
		else if (PORT_enumPinConfigArray[counter] == PORT_enumPinInputDisablePullup)
		{
			if (counter <= 7)
			{
				DDRB &= ~(1<<counter);
				PORTB &= ~(1<<counter);
			}
			else if (counter <= 14)
			{
				DDRC &= ~(1<<(counter%8));
				PORTC &= ~(1<<(counter%8));
			}
			else if (counter < ATmega8_NumofPins)
			{
				DDRD &= ~(1<<(counter%15));
				PORTD &= ~(1<<(counter%15));
			}
			else
			{

			}
		}
		else  if (PORT_enumPinConfigArray[counter] == PORT_enumPinOutputHigh)
		{
			if (counter <= 7)
			{
				DDRB |= (1<<counter);
				PORTB |= (1<<counter);
			}
			else if (counter <= 14)
			{
				DDRC |= (1<<(counter%8));
				PORTC |= (1<<(counter%8));
			}
			else if (counter < ATmega8_NumofPins)
			{
				DDRD |= (1<<(counter%15));
				PORTD |= (1<<(counter%15));
			}
			else
			{

			}
		}
		else if (PORT_enumPinConfigArray[counter] == PORT_enumPinOutputLow)
		{
			if (counter <= 7)
			{
				DDRB |= (1<<counter);
				PORTB &= ~(1<<counter);
			}
			else if (counter <= 14)
			{
				DDRC |= (1<<(counter%8));
				PORTC &= ~(1<<(counter%8));
			}
			else if (counter < ATmega8_NumofPins)
			{
				DDRD |= (1<<(counter%15));
				PORTD &= ~(1<<(counter%15));
			}
			else
			{

			}
		}
	}

#endif	/* #if (ATmega_Model == ATmega8) */

#if (ATmega_Model == ATmega16_32)

	for (uint8 counter = 0; counter < ATmega16_32_NumofPins; counter++)
	{
		if (PORT_enumPinConfigArray[counter] == PORT_enumPinInputEnablePullUp)
		{
			if (counter <= 7)
			{
				DDRA &= ~(1<<counter);
				PORTA |= (1<<counter);
			}
			else if (counter <= 15)
			{
				DDRB &= ~(1<<(counter%8));
				PORTB |= (1<<(counter%8));
			}
			else if (counter <= 23)
			{
				DDRC &= ~(1<<(counter%16));
				PORTC |= (1<<(counter%16));
			}
			else if (counter < ATmega16_32_NumofPins)
			{
				DDRD &= ~(1<<(counter%24));
				PORTD |= (1<<(counter%24));
			}
			else
			{

			}
		}
		else if (PORT_enumPinConfigArray[counter] == PORT_enumPinInputDisablePullup)
		{
			if (counter <= 7)
			{
				DDRA &= ~(1<<counter);
				PORTA &= ~(1<<counter);
			}
			else if (counter <= 15)
			{
				DDRB &= ~(1<<(counter%8));
				PORTB &= ~(1<<(counter%8));
			}
			else if (counter <= 23)
			{
				DDRC &= ~(1<<(counter%16));
				PORTC &= ~(1<<(counter%16));
			}
			else if (counter < ATmega16_32_NumofPins)
			{
				DDRD &= ~(1<<(counter%24));
				PORTD &= ~(1<<(counter%24));
			}
			else
			{

			}
		}
		else  if (PORT_enumPinConfigArray[counter] == PORT_enumPinOutputHigh)
		{
			if (counter <= 7)
			{
				DDRA |= (1<<counter);
				PORTA |= (1<<counter);
			}
			else if (counter <= 15)
			{
				DDRB |= (1<<(counter%8));
				PORTB |= (1<<(counter%8));
			}
			else if (counter <= 23)
			{
				DDRC |= (1<<(counter%16));
				PORTC |= (1<<(counter%16));
			}
			else if (counter < ATmega16_32_NumofPins)
			{
				DDRD |= (1<<(counter%24));
				PORTD |= (1<<(counter%24));
			}
			else
			{

			}
		}
		else if (PORT_enumPinConfigArray[counter] == PORT_enumPinOutputLow)
		{
			if (counter <= 7)
			{
				DDRA |= (1<<counter);
				PORTA &= ~(1<<counter);
			}
			else if (counter <= 15)
			{
				DDRB |= (1<<(counter%8));
				PORTB &= ~(1<<(counter%8));
			}
			else if (counter <= 23)
			{
				DDRC |= (1<<(counter%16));
				PORTC &= ~(1<<(counter%16));
			}
			else if (counter < ATmega16_32_NumofPins)
			{
				DDRD |= (1<<(counter%24));
				PORTD &= ~(1<<(counter%24));
			}
			else
			{

			}
		}
	}

#endif	/* #if (ATmega_Model == ATmega16_32) */

#if (ATmega_Model == ATmega64_128)

	for (uint8 counter = 0; counter < ATmega64_128_NumofPins; counter++)
	{
		if (PORT_enumPinConfigArray[counter] == PORT_enumPinInputEnablePullUp)
		{
			if (counter <= 7)
			{
				DDRA &= ~(1<<counter);
				PORTA |= (1<<counter);
			}
			else if (counter <= 15)
			{
				DDRB &= ~(1<<(counter%8));
				PORTB |= (1<<(counter%8));
			}
			else if (counter <= 23)
			{
				DDRC &= ~(1<<(counter%16));
				PORTC |= (1<<(counter%16));
			}
			else if (counter <= 31)
			{
				DDRD &= ~(1<<(counter%24));
				PORTD |= (1<<(counter%24));
			}
			else if (counter <= 39)
			{
				DDRE &= ~(1<<(counter%32));
				PORTE |= (1<<(counter%32));
			}
			else if (counter <= 47)
			{
				DDRF &= ~(1<<(counter%40));
				PORTF |= (1<<(counter%40));
			}
			else if (counter < ATmega64_128_NumofPins)
			{
				DDRG &= ~(1<<(counter%48));
				PORTG |= (1<<(counter%48));
			}
			else
			{

			}
		}
		else if (PORT_enumPinConfigArray[counter] == PORT_enumPinInputDisablePullup)
		{
			if (counter <= 7)
			{
				DDRA &= ~(1<<counter);
				PORTA &= ~(1<<counter);
			}
			else if (counter <= 15)
			{
				DDRB &= ~(1<<(counter%8));
				PORTB &= ~(1<<(counter%8));
			}
			else if (counter <= 23)
			{
				DDRC &= ~(1<<(counter%16));
				PORTC &= ~(1<<(counter%16));
			}
			else if (counter <= 31)
			{
				DDRD &= ~(1<<(counter%24));
				PORTD &= ~(1<<(counter%24));
			}
			else if (counter <= 39)
			{
				DDRE &= ~(1<<(counter%32));
				PORTE &= ~(1<<(counter%32));
			}
			else if (counter <= 47)
			{
				DDRF &= ~(1<<(counter%40));
				PORTF &= ~(1<<(counter%40));
			}
			else if (counter < ATmega64_128_NumofPins)
			{
				DDRG &= ~(1<<(counter%48));
				PORTG &= ~(1<<(counter%48));
			}
			else
			{

			}
		}
		else  if (PORT_enumPinConfigArray[counter] == PORT_enumPinOutputHigh)
		{
			if (counter <= 7)
			{
				DDRA |= (1<<counter);
				PORTA |= (1<<counter);
			}
			else if (counter <= 15)
			{
				DDRB |= (1<<(counter%8));
				PORTB |= (1<<(counter%8));
			}
			else if (counter <= 23)
			{
				DDRC |= (1<<(counter%16));
				PORTC |= (1<<(counter%16));
			}
			else if (counter <= 31)
			{
				DDRD |= (1<<(counter%24));
				PORTD |= (1<<(counter%24));
			}
			else if (counter <= 39)
			{
				DDRE |= (1<<(counter%32));
				PORTE |= (1<<(counter%32));
			}
			else if (counter <= 47)
			{
				DDRF |= (1<<(counter%40));
				PORTF |= (1<<(counter%40));
			}
			else if (counter < ATmega64_128_NumofPins)
			{
				DDRG |= (1<<(counter%48));
				PORTG |= (1<<(counter%48));
			}
			else
			{

			}
		}
		else if (PORT_enumPinConfigArray[counter] == PORT_enumPinOutputLow)
		{
			if (counter <= 7)
			{
				DDRA |= (1<<counter);
				PORTA &= ~(1<<counter);
			}
			else if (counter <= 15)
			{
				DDRB |= (1<<(counter%8));
				PORTB &= ~(1<<(counter%8));
			}
			else if (counter <= 23)
			{
				DDRC |= (1<<(counter%16));
				PORTC &= ~(1<<(counter%16));
			}
			else if (counter <= 31)
			{
				DDRD |= (1<<(counter%24));
				PORTD &= ~(1<<(counter%24));
			}
			else if (counter <= 39)
			{
				DDRE |= (1<<(counter%32));
				PORTE &= ~(1<<(counter%32));
			}
			else if (counter <= 47)
			{
				DDRF |= (1<<(counter%40));
				PORTF &= ~(1<<(counter%40));
			}
			else if (counter < ATmega64_128_NumofPins)
			{
				DDRG |= (1<<(counter%48));
				PORTG &= ~(1<<(counter%48));
			}
			else
			{

			}
		}
	}

#endif	/* #if (ATmega_Model == ATmega64_128) */


#else
#error "Invalid Compilation Mode :("

#endif	/* #if Compilation_Mode == Pre_Compilation */

}








