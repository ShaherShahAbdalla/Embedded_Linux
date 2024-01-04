/******************************************************************************
 *
 * Module: PORT Driver for Initialization of Ports
 * 			(Supports ATmega8, ATmega16, ATmega32, ATmega64, ATmega128)
 *
 * File Name: PORT_cfg.h
 *
 * Description: Configuration file for PORTs Driver.
 *
 * Author: Shaher Shah Abdalla Kamal
 *
 * Date: 2-12-2023
 *
 *******************************************************************************/

#ifndef PORT_CFG_H_
#define PORT_CFG_H_

/* Including the .h file that contains Driver's APIs' prototypes and typedefs' declaration. */
//#include "./PORT.h"


/****************************************************************************************/
/*							Configuration Macros Declaration							*/
/****************************************************************************************/

/* Description: Set the compilation mode of DIO driver.
 * Options:		Pre_Compilation
 * 		or		Post_Compilation */
#define Compilation_Mode		Post_Compilation

/* Description: Choose the ATmega model you work on.
 * Options:		ATmega8
 * 		or		ATmega16_32
 * 		or		ATmega64_128 */
#define ATmega_Model			ATmega16_32



#if Compilation_Mode == Pre_Compilation
/* Description: Choose the pin configuration.
 * Options:		InputEnablePullUp
 * 		or		InputDisablePullup
 * 		or		OutputHigh
 * 		or		OutputLow */

#if ((ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128))
#define PORT_PINA0_Config				OutputLow
#define PORT_PINA1_Config				OutputLow
#define PORT_PINA2_Config				OutputHigh
#define PORT_PINA3_Config				OutputLow
#define PORT_PINA4_Config				InputEnablePullUp
#define PORT_PINA5_Config				OutputLow
#define PORT_PINA6_Config				InputDisablePullup
#define PORT_PINA7_Config				OutputLow

#endif	/* #if ((ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128)) */

#if ((ATmega_Model == ATmega8) || (ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128))
#define PORT_PINB0_Config				OutputLow
#define PORT_PINB1_Config				OutputLow
#define PORT_PINB2_Config				OutputLow
#define PORT_PINB3_Config				OutputLow
#define PORT_PINB4_Config				OutputLow
#define PORT_PINB5_Config				OutputLow
#define PORT_PINB6_Config				OutputLow
#define PORT_PINB7_Config				OutputLow

#define PORT_PINC0_Config				OutputLow
#define PORT_PINC1_Config				OutputLow
#define PORT_PINC2_Config				OutputLow
#define PORT_PINC3_Config				OutputLow
#define PORT_PINC4_Config				OutputLow
#define PORT_PINC5_Config				OutputLow
#define PORT_PINC6_Config				OutputLow

#endif	/* #if ((ATmega_Model == ATmega8) || (ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128)) */

#if ((ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128))
#define PORT_PINC7_Config				OutputLow

#endif	/* #if ((ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128)) */

#if ((ATmega_Model == ATmega8) || (ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128))
#define PORT_PIND0_Config				OutputLow
#define PORT_PIND1_Config				OutputLow
#define PORT_PIND2_Config				OutputLow
#define PORT_PIND3_Config				OutputLow
#define PORT_PIND4_Config				OutputLow
#define PORT_PIND5_Config				OutputLow
#define PORT_PIND6_Config				OutputLow
#define PORT_PIND7_Config				OutputLow

#endif	/* #if ((ATmega_Model == ATmega8) || (ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128)) */

#if (ATmega_Model == ATmega64_128)
#define PORT_PINE0_Config				OutputLow
#define PORT_PINE1_Config				OutputLow
#define PORT_PINE2_Config				OutputLow
#define PORT_PINE3_Config				OutputLow
#define PORT_PINE4_Config				OutputLow
#define PORT_PINE5_Config				OutputLow
#define PORT_PINE6_Config				OutputLow
#define PORT_PINE7_Config				OutputLow

#define PORT_PINF0_Config				OutputLow
#define PORT_PINF1_Config				OutputLow
#define PORT_PINF2_Config				OutputLow
#define PORT_PINF3_Config				OutputLow
#define PORT_PINF4_Config				OutputLow
#define PORT_PINF5_Config				OutputLow
#define PORT_PINF6_Config				OutputLow
#define PORT_PINF7_Config				OutputLow

#define PORT_PING0_Config				OutputLow
#define PORT_PING1_Config				OutputLow
#define PORT_PING2_Config				OutputLow
#define PORT_PING3_Config				OutputLow
#define PORT_PING4_Config				OutputLow

#endif	/* #if (ATmega_Model == ATmega64_128) */

#endif	/* #if Compilation Mode */

#endif 	/* #ifndef PORT_CFG_H_ */
