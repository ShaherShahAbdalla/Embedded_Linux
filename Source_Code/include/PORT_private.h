 /******************************************************************************
 *
 * Module: PORT Driver for Initialization of Ports
 * 			(Supports ATmega8, ATmega16, ATmega32, ATmega64, ATmega128)
 *
 * File Name: PORT_private.h
 *
 * Description: Macros for PORTs' registers and private function prototype.
 *
 * Author: Shaher Shah Abdalla Kamal
 *
 * Date: 27-11-2023
 *
 *******************************************************************************/
#ifndef PORT_PRIVATE_H_
#define PORT_PRIVATE_H_

/* ِIncluding the .h file that contains typedefs for the primitive data types */
#include "std_types.h"

/* ِIncluding the .h file that contains all configurations for compilation mode, ATmega model, and pins configurations */
//#include "PORT_cfg.h"

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


/* Concatenation function-like macro */
#define CONCAT(b7,b6,b5,b4,b3,b2,b1,b0)				CONCAT_HELPER(b7,b6,b5,b4,b3,b2,b1,b0)
#define CONCAT_HELPER(b7,b6,b5,b4,b3,b2,b1,b0)		0b##b7##b6##b5##b4##b3##b2##b1##b0


#endif 	/* PORT_PRIVATE_H_ */
