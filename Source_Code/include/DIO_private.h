 /******************************************************************************
 *
 * Module: Digital Input Output (DIO) for ATmega32
 *
 * File Name: DIO_private.h
 *
 * Description: Macros for DIO's Registers.
 *
 * Author: Shaher Shah Abdalla Kamal
 *
 * Date: created 27-11-2023, edited 4-12-2023
 *
 *******************************************************************************/

#ifndef DIO_PRIVATE_H_
#define DIO_PRIVATE_H_

/* ِIncluding the .h file that contains typedefs for the primitive data types */
#include "std_types.h"

/* ِIncluding the .h file that contains configurations for ATmega model */
//#include "./DIO_cfg.h"


/****************************************************************************************/
/*									Macros Declaration									*/
/****************************************************************************************/

/* Using addresses in the data sheet for these registers */
/* These registers is used to configure, set, and read the pins of the micro-controller */

#if ((ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128))
/* Registers related to port A */
#define PORTA					(*((volatile uint8 *) 0x3B))
#define DDRA					(*((volatile uint8 *) 0x3A))
#define PINA					(*((volatile uint8 *) 0x39))

#endif	/* #if ((ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128)) */

#if ((ATmega_Model == ATmega8) || (ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128))
/* Registers related to port B */
#define PORTB					(*((volatile uint8 *) 0x38))
#define DDRB					(*((volatile uint8 *) 0x37))
#define PINB					(*((volatile uint8 *) 0x36))

/* Registers related to port C */
#define PORTC					(*((volatile uint8 *) 0x35))
#define DDRC					(*((volatile uint8 *) 0x34))
#define PINC					(*((volatile uint8 *) 0x33))

/* Registers related to port D */
#define PORTD					(*((volatile uint8 *) 0x32))
#define DDRD					(*((volatile uint8 *) 0x31))
#define PIND					(*((volatile uint8 *) 0x30))

#endif	/* #if ((ATmega_Model == ATmega8) || (ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128)) */

#if (ATmega_Model == ATmega64_128)
/* Registers related to port E */
#define PORTE					(*((volatile uint8 *) 0x23))
#define DDRE					(*((volatile uint8 *) 0x22))
#define PINE					(*((volatile uint8 *) 0x21))

/* Registers related to port F */
#define PORTF					(*((volatile uint8 *) 0x62))
#define DDRF					(*((volatile uint8 *) 0x61))
#define PINF					(*((volatile uint8 *) 0x20))

/* Registers related to port G */
#define PORTG					(*((volatile uint8 *) 0x65))
#define DDRG					(*((volatile uint8 *) 0x64))
#define PING					(*((volatile uint8 *) 0x63))

#endif	/* #if (ATmega_Model == ATmega64_128) */

#endif /* DIO_PRIVATE_H_ */
