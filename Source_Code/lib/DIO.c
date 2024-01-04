/******************************************************************************
 *
 * Module: Digital Input Output (DIO) for ATmega32
 *
 * File Name: DIO.c
 *
 * Description: Driver's APIs' implementation.
 *
 * Author: Shaher Shah Abdalla Kamal
 *
 * Date: created 27-11-2023, edited 4-12-2023
 *
 *******************************************************************************/

/* Including the .h file that contains Driver's APIs' prototypes and typedefs' declaration. */
#include "../include/DIO.h"
/* ِIncluding the .h file that contains configurations for ATmega model */
#include "../include/DIO_cfg.h"
/* Including the .h file that contains the addresses of the registers related to pins of the micro-controller */
#include "../include/DIO_private.h"


/**
 *@brief  : Function to Set the Pins to be Logic HIGH  or Logic LOW.
 *@param  : Port Number,Pin Number,Logic State(HIGH/LOW).
 *@return : Error State.
 */
DIO_enumError_t DIO_enumSetPin(DIO_enumPorts_t Copy_enumPortNum, DIO_enumPins_t Copy_enumPinNum, DIO_enumPinLogicState_t Copy_enumPinLogicState)
{
	/* A local variable to assign the error state inside it and use only one return in the whole function
	 * through returning the value of this local variable.
	 * Initially we assume that everything is OK, if not its value will be changed according to a definite error type */
	DIO_enumError_t LOC_enumErrorState = DIO_enumOk;

#if (ATmega_Model == ATmega8)
	/* Check if the pin number is in the range from pin 0 to pin 7 or not,
	 * if not in the range return an error state that the user inputed a wrong pin number */
	if ((((Copy_enumPortNum == DIO_enumPortB) || (Copy_enumPortNum == DIO_enumPortD)) && ((Copy_enumPinNum < DIO_enumPin0) || (Copy_enumPinNum > DIO_enumPin7))) || (((Copy_enumPortNum == DIO_enumPortC)) && ((Copy_enumPinNum < DIO_enumPin0) || (Copy_enumPinNum > DIO_enumPin6))))
	{
		LOC_enumErrorState = DIO_enumWrongPin;
	}

#elif (ATmega_Model == ATmega16_32)
	/* Check if the pin number is in the range from pin 0 to pin 7 or not,
	 * if not in the range return an error state that the user inputed a wrong pin number */
	if ((Copy_enumPinNum < DIO_enumPin0) || (Copy_enumPinNum > DIO_enumPin7))
	{
		LOC_enumErrorState = DIO_enumWrongPin;
	}

#elif (ATmega_Model == ATmega64_128))
	/* Check if the pin number is in the range from pin 0 to pin 7 or not,
	 * if not in the range return an error state that the user inputed a wrong pin number */
	if ((((Copy_enumPortNum != DIO_enumPortG)) && ((Copy_enumPinNum < DIO_enumPin0) || (Copy_enumPinNum > DIO_enumPin7))) || (((Copy_enumPortNum == DIO_enumPortG)) && ((Copy_enumPinNum < DIO_enumPin0) || (Copy_enumPinNum > DIO_enumPin4))))
	{
		LOC_enumErrorState = DIO_enumWrongPin;
	}

#else
#error "You entered INVALID ATmega Model :("

#endif /* #if (ATmega_Model == ATmega8) */
	/* Seems like the user has inputed a pin number in the range, so we will check for the inputed port number
	 * and the inputed logic state */
	else
	{
		/* See which port the user want to set the logic state of a pin inside it */
		switch (Copy_enumPortNum)
		{

#if ((ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128))
		case DIO_enumPortA:
			/* See which logic state the user choose to the pin */
			switch (Copy_enumPinLogicState)
			{
			case DIO_enumPinLogicLow:
				/* If the pin is already defined as an input pin we should not write in it */
				if (((DDRA & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 0)
				{
					LOC_enumErrorState = DIO_enumTryingToWriteInInputPin;
				}
				else
				{
					/* Setting the state of the entered pin as logic low */
					PORTA &= ~(1 << Copy_enumPinNum);
				}
				break;
			case DIO_enumPinLogicHigh:
				/* If the pin is already defined as an input pin we should not write in it */
				if (((DDRA & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 0)
				{
					LOC_enumErrorState = DIO_enumTryingToWriteInInputPin;
				}
				else
				{
					/* Setting the state of the entered pin as logic high */
					PORTA |= (1 << Copy_enumPinNum);
				}
				break;
				/* If the logic state entered is neither logic high nor logic low,
				 * return an error state that the user inputed a logic state */
			default:
				LOC_enumErrorState = DIO_enumWrongLogicState;
				break;
			}
			break;
#endif /* ((ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128)) */

		case DIO_enumPortB:
			/* See which logic state the user choose to the pin */
			switch (Copy_enumPinLogicState)
			{
			case DIO_enumPinLogicLow:
				/* If the pin is already defined as an input pin we should not write in it */
				if (((DDRB & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 0)
				{
					LOC_enumErrorState = DIO_enumTryingToWriteInInputPin;
				}
				else
				{
					/* Setting the state of the entered pin as logic low */
					PORTB &= ~(1 << Copy_enumPinNum);
				}
				break;
			case DIO_enumPinLogicHigh:
				/* If the pin is already defined as an input pin we should not write in it */
				if (((DDRB & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 0)
				{
					LOC_enumErrorState = DIO_enumTryingToWriteInInputPin;
				}
				else
				{
					/* Setting the state of the entered pin as logic high */
					PORTB |= (1 << Copy_enumPinNum);
				}
				break;
				/* If the logic state entered is neither logic high nor logic low,
				 * return an error state that the user inputed a logic state */
			default:
				LOC_enumErrorState = DIO_enumWrongLogicState;
				break;
			}
			break;
		case DIO_enumPortC:
			/* See which logic state the user choose to the pin */
			switch (Copy_enumPinLogicState)
			{
			case DIO_enumPinLogicLow:
				/* If the pin is already defined as an input pin we should not write in it */
				if (((DDRC & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 0)
				{
					LOC_enumErrorState = DIO_enumTryingToWriteInInputPin;
				}
				else
				{
					/* Setting the state of the entered pin as logic low */
					PORTC &= ~(1 << Copy_enumPinNum);
				}
				break;
			case DIO_enumPinLogicHigh:
				/* If the pin is already defined as an input pin we should not write in it */
				if (((DDRC & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 0)
				{
					LOC_enumErrorState = DIO_enumTryingToWriteInInputPin;
				}
				else
				{
					/* Setting the state of the entered pin as logic high */
					PORTC |= (1 << Copy_enumPinNum);
				}
				break;
				/* If the logic state entered is neither logic high nor logic low,
				 * return an error state that the user inputed a logic state */
			default:
				LOC_enumErrorState = DIO_enumWrongLogicState;
				break;
			}
			break;
		case DIO_enumPortD:
			/* See which logic state the user choose to the pin */
			switch (Copy_enumPinLogicState)
			{
			case DIO_enumPinLogicLow:
				/* If the pin is already defined as an input pin we should not write in it */
				if (((DDRD & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 0)
				{
					LOC_enumErrorState = DIO_enumTryingToWriteInInputPin;
				}
				else
				{
					/* Setting the state of the entered pin as logic low */
					PORTD &= ~(1 << Copy_enumPinNum);
				}
				break;
			case DIO_enumPinLogicHigh:
				/* If the pin is already defined as an input pin we should not write in it */
				if (((DDRD & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 0)
				{
					LOC_enumErrorState = DIO_enumTryingToWriteInInputPin;
				}
				else
				{
					/* Setting the state of the entered pin as logic high */
					PORTD |= (1 << Copy_enumPinNum);
				}
				break;
				/* If the logic state entered is neither logic high nor logic low,
				 * return an error state that the user inputed a logic state */
			default:
				LOC_enumErrorState = DIO_enumWrongLogicState;
				break;
			}
			break;
#if (ATmega_Model == ATmega64_128)
		case DIO_enumPortE:
			/* See which logic state the user choose to the pin */
			switch (Copy_enumPinLogicState)
			{
			case DIO_enumPinLogicLow:
				/* If the pin is already defined as an input pin we should not write in it */
				if (((DDRE & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 0)
				{
					LOC_enumErrorState = DIO_enumTryingToWriteInInputPin;
				}
				else
				{
					/* Setting the state of the entered pin as logic low */
					PORTE &= ~(1 << Copy_enumPinNum);
				}
				break;
			case DIO_enumPinLogicHigh:
				/* If the pin is already defined as an input pin we should not write in it */
				if (((DDRE & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 0)
				{
					LOC_enumErrorState = DIO_enumTryingToWriteInInputPin;
				}
				else
				{
					/* Setting the state of the entered pin as logic high */
					PORTE |= (1 << Copy_enumPinNum);
				}
				break;
				/* If the logic state entered is neither logic high nor logic low,
				 * return an error state that the user inputed a logic state */
			default:
				LOC_enumErrorState = DIO_enumWrongLogicState;
				break;
			}
			break;
		case DIO_enumPortF:
			/* See which logic state the user choose to the pin */
			switch (Copy_enumPinLogicState)
			{
			case DIO_enumPinLogicLow:
				/* If the pin is already defined as an input pin we should not write in it */
				if (((DDRF & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 0)
				{
					LOC_enumErrorState = DIO_enumTryingToWriteInInputPin;
				}
				else
				{
					/* Setting the state of the entered pin as logic low */
					PORTF &= ~(1 << Copy_enumPinNum);
				}
				break;
			case DIO_enumPinLogicHigh:
				/* If the pin is already defined as an input pin we should not write in it */
				if (((DDRF & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 0)
				{
					LOC_enumErrorState = DIO_enumTryingToWriteInInputPin;
				}
				else
				{
					/* Setting the state of the entered pin as logic high */
					PORTF |= (1 << Copy_enumPinNum);
				}
				break;
				/* If the logic state entered is neither logic high nor logic low,
				 * return an error state that the user inputed a logic state */
			default:
				LOC_enumErrorState = DIO_enumWrongLogicState;
				break;
			}
			break;
		case DIO_enumPortG:
			/* See which logic state the user choose to the pin */
			switch (Copy_enumPinLogicState)
			{
			case DIO_enumPinLogicLow:
				/* If the pin is already defined as an input pin we should not write in it */
				if (((DDRG & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 0)
				{
					LOC_enumErrorState = DIO_enumTryingToWriteInInputPin;
				}
				else
				{
					/* Setting the state of the entered pin as logic low */
					PORTG &= ~(1 << Copy_enumPinNum);
				}
				break;
			case DIO_enumPinLogicHigh:
				/* If the pin is already defined as an input pin we should not write in it */
				if (((DDRG & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 0)
				{
					LOC_enumErrorState = DIO_enumTryingToWriteInInputPin;
				}
				else
				{
					/* Setting the state of the entered pin as logic high */
					PORTG |= (1 << Copy_enumPinNum);
				}
				break;
				/* If the logic state entered is neither logic high nor logic low,
				 * return an error state that the user inputed a logic state */
			default:
				LOC_enumErrorState = DIO_enumWrongLogicState;
				break;
			}
			break;

#endif /* #if (ATmega_Model == ATmega64_128) */

		/* If the port number is not in the range from port A to port D return an error state that the user
		 * inputed a wrong port number */
		default:
			LOC_enumErrorState =  DIO_enumWrongPort;
			break;
		}
	}
	return LOC_enumErrorState;
}

/**
 *@brief : Function to Set the whole Port(8 pins) at one time to be Logic HIGH  or Logic LOW.
 *@param : Port Number,Logic State(HIGH/LOW).
 *@return: Error State.
 */
DIO_enumError_t DIO_enumSetPort(DIO_enumPorts_t Copy_enumPortNum, uint8 Copy_enumPortLogicState)
{
	/* A local variable to assign the error state inside it and use only one return in the whole function
	 * through returning the value of this local variable.
	 * Initially we assume that everything is OK, if not its value will be changed according to a definite error type */
	DIO_enumError_t LOC_enumErrorState = DIO_enumOk;

	/* See which port the user want to set the logic state of */
	switch (Copy_enumPortNum)
	{

#if ((ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128))
	case DIO_enumPortA:
		/* Check if the user entered a valid or an invalid Logic state */
		if ((Copy_enumPortLogicState < DIO_enumPortLogicLow) || (Copy_enumPortLogicState > DIO_enumPortLogicHigh))
		{
			LOC_enumErrorState = DIO_enumWrongLogicState;
		}
		else
		{
			/* If the port is already defined as an input port we should not write in it */
			if (DDRA == DIO_enumPortConfigInput)
			{
				LOC_enumErrorState = DIO_enumTryingToWriteInInputPort;
			}
			else
			{
				/* Setting the value of the port the same as entered from the user */
				PORTA = Copy_enumPortLogicState;
			}
		}
		break;
#endif /* ((ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128)) */

	case DIO_enumPortB:
		/* Check if the user entered a valid or an invalid Logic state */
		if ((Copy_enumPortLogicState < DIO_enumPortLogicLow) || (Copy_enumPortLogicState > DIO_enumPortLogicHigh))
		{
			LOC_enumErrorState = DIO_enumWrongLogicState;
		}
		else
		{
			/* If the port is already defined as an input port we should not write in it */
			if (DDRB == DIO_enumPortConfigInput)
			{
				LOC_enumErrorState = DIO_enumTryingToWriteInInputPort;
			}
			else
			{
				/* Setting the value of the port the same as entered from the user */
				PORTB = Copy_enumPortLogicState;
			}
		}
		break;
	case DIO_enumPortC:
		/* Check if the user entered a valid or an invalid Logic state */
		if ((Copy_enumPortLogicState < DIO_enumPortLogicLow) || (Copy_enumPortLogicState > DIO_enumPortLogicHigh))
		{
			LOC_enumErrorState = DIO_enumWrongLogicState;
		}
		else
		{
			/* If the port is already defined as an input port we should not write in it */
			if (DDRC == DIO_enumPortConfigInput)
			{
				LOC_enumErrorState = DIO_enumTryingToWriteInInputPort;
			}
			else
			{
				/* Setting the value of the port the same as entered from the user */
				PORTC = Copy_enumPortLogicState;
			}
		}
		break;
	case DIO_enumPortD:
		/* Check if the user entered a valid or an invalid Logic state */
		if ((Copy_enumPortLogicState < DIO_enumPortLogicLow) || (Copy_enumPortLogicState > DIO_enumPortLogicHigh))
		{
			LOC_enumErrorState = DIO_enumWrongLogicState;
		}
		else
		{
			/* If the port is already defined as an input port we should not write in it */
			if (DDRD == DIO_enumPortConfigInput)
			{
				LOC_enumErrorState = DIO_enumTryingToWriteInInputPort;
			}
			else
			{
				/* Setting the value of the port the same as entered from the user */
				PORTD = Copy_enumPortLogicState;
			}
		}
		break;
#if (ATmega_Model == ATmega64_128)
	case DIO_enumPortE:
		/* Check if the user entered a valid or an invalid Logic state */
		if ((Copy_enumPortLogicState < DIO_enumPortLogicLow) || (Copy_enumPortLogicState > DIO_enumPortLogicHigh))
		{
			LOC_enumErrorState = DIO_enumWrongLogicState;
		}
		else
		{
			/* If the port is already defined as an input port we should not write in it */
			if (DDRE == DIO_enumPortConfigInput)
			{
				LOC_enumErrorState = DIO_enumTryingToWriteInInputPort;
			}
			else
			{
				/* Setting the value of the port the same as entered from the user */
				PORTE = Copy_enumPortLogicState;
			}
		}
		break;
	case DIO_enumPortF:
		/* Check if the user entered a valid or an invalid Logic state */
		if ((Copy_enumPortLogicState < DIO_enumPortLogicLow) || (Copy_enumPortLogicState > DIO_enumPortLogicHigh))
		{
			LOC_enumErrorState = DIO_enumWrongLogicState;
		}
		else
		{
			/* If the port is already defined as an input port we should not write in it */
			if (DDRF == DIO_enumPortConfigInput)
			{
				LOC_enumErrorState = DIO_enumTryingToWriteInInputPort;
			}
			else
			{
				/* Setting the value of the port the same as entered from the user */
				PORTF = Copy_enumPortLogicState;
			}
		}
		break;
	case DIO_enumPortG:
		/* Check if the user entered a valid or an invalid Logic state */
		if ((Copy_enumPortLogicState < DIO_enumPortLogicLow) || (Copy_enumPortLogicState > DIO_enumPortLogicHigh))
		{
			LOC_enumErrorState = DIO_enumWrongLogicState;
		}
		else
		{
			/* If the port is already defined as an input port we should not write in it */
			if (DDRG == DIO_enumPortConfigInput)
			{
				LOC_enumErrorState = DIO_enumTryingToWriteInInputPort;
			}
			else
			{
				/* Setting the value of the port the same as entered from the user */
				PORTG = Copy_enumPortLogicState;
			}
		}
		break;

#endif /* (ATmega_Model == ATmega64_128) */

	/* If the port number is not in the range from port A to port D return an error state that the user
	 * inputed a wrong port number */
	default:
		LOC_enumErrorState =  DIO_enumWrongPort;
		break;
	}
	return LOC_enumErrorState;
}

/**
 *@brief  : Function to Read the Logic State of the Pin (Is it HIGH or LOW).
 *@param  : Port Number,Pin Number, Pointer points to unsigned char passed by address (to return the value of pin state).
 *@return : Error State.
 */
DIO_enumError_t DIO_enumReadPinState(DIO_enumPorts_t Copy_enumPortNum, DIO_enumPins_t Copy_enumPinNum, DIO_enumPinLogicState_t* Add_Pu8PinValue)
{
	/* A local variable to assign the error state inside it and use only one return in the whole function
	 * through returning the value of this local variable.
	 * Initially we assume that everything is OK, if not its value will be changed according to a definite error type */
	DIO_enumError_t LOC_enumErrorState = DIO_enumOk;

#if (ATmega_Model == ATmega8)
	/* Check if the pin number is in the range from pin 0 to pin 7 or not,
	 * if not in the range return an error state that the user inputed a wrong pin number */
	if ((((Copy_enumPortNum == DIO_enumPortB) || (Copy_enumPortNum == DIO_enumPortD)) && ((Copy_enumPinNum < DIO_enumPin0) || (Copy_enumPinNum > DIO_enumPin7))) || (((Copy_enumPortNum == DIO_enumPortC)) && ((Copy_enumPinNum < DIO_enumPin0) || (Copy_enumPinNum > DIO_enumPin6))))
	{
		LOC_enumErrorState = DIO_enumWrongPin;
	}

#elif (ATmega_Model == ATmega16_32)
	/* Check if the pin number is in the range from pin 0 to pin 7 or not,
	 * if not in the range return an error state that the user inputed a wrong pin number */
	if ((Copy_enumPinNum < DIO_enumPin0) || (Copy_enumPinNum > DIO_enumPin7))
	{
		LOC_enumErrorState = DIO_enumWrongPin;
	}

#elif (ATmega_Model == ATmega64_128))
	/* Check if the pin number is in the range from pin 0 to pin 7 or not,
	 * if not in the range return an error state that the user inputed a wrong pin number */
	if ((((Copy_enumPortNum != DIO_enumPortG)) && ((Copy_enumPinNum < DIO_enumPin0) || (Copy_enumPinNum > DIO_enumPin7))) || (((Copy_enumPortNum == DIO_enumPortG)) && ((Copy_enumPinNum < DIO_enumPin0) || (Copy_enumPinNum > DIO_enumPin4))))
	{
		LOC_enumErrorState = DIO_enumWrongPin;
	}

#else
#error "You entered INVALID ATmega Model :("

#endif /* #if (ATmega_Model == ATmega8) */

	/* Check if the entered pointer is a NULL pointer, we will not be able to dereference it */
	else if (Add_Pu8PinValue == NULL_PTR)
	{
		LOC_enumErrorState = DIO_enumNullPointer;
	}
	/* Seems like the user has inputed a pin number in the range, so we will check for the inputed port number
	 * and the inputed logic state */
	else
	{
		/* See which port the user want to set the logic state of a pin inside it */
		switch (Copy_enumPortNum)
		{

#if ((ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128))

		case DIO_enumPortA:
			/* If the pin is already defined as an output pin we do not have to read form it */
			if (((DDRA & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 1)
			{
				LOC_enumErrorState = DIO_enumTryingToReadFromOutputPin;
			}
			else
			{
				/* Reading the value of the entered pin */
				*Add_Pu8PinValue = (((PINA & (1<<Copy_enumPinNum)) >> Copy_enumPinNum));
			}
			break;
#endif /* ((ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128)) */

		case DIO_enumPortB:
			/* If the pin is already defined as an output pin we do not have to read form it */
			if ( ((DDRB & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 1)
			{
				LOC_enumErrorState = DIO_enumTryingToReadFromOutputPin;
			}
			else
			{
				/* Reading the value of the entered pin */
				*Add_Pu8PinValue = (((PINB & (1<<Copy_enumPinNum)) >> Copy_enumPinNum));
			}
			break;
		case DIO_enumPortC:
			/* If the pin is already defined as an output pin we do not have to read form it */
			if (((DDRC & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 1)
			{
				LOC_enumErrorState = DIO_enumTryingToReadFromOutputPin;
			}
			else
			{
				/* Reading the value of the entered pin */
				*Add_Pu8PinValue = (((PINC & (1<<Copy_enumPinNum)) >> Copy_enumPinNum));
			}
			break;
		case DIO_enumPortD:
			/* If the pin is already defined as an output pin we do not have to read form it */
			if (((DDRD & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 1)
			{
				LOC_enumErrorState = DIO_enumTryingToReadFromOutputPin;
			}
			else
			{
				/* Reading the value of the entered pin */
				*Add_Pu8PinValue = (((PIND & (1<<Copy_enumPinNum)) >> Copy_enumPinNum));
			}
			break;

#if (ATmega_Model == ATmega64_128)

		case DIO_enumPortE:
			/* If the pin is already defined as an output pin we do not have to read form it */
			if (((DDRE & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 1)
			{
				LOC_enumErrorState = DIO_enumTryingToReadFromOutputPin;
			}
			else
			{
				/* Reading the value of the entered pin */
				*Add_Pu8PinValue = (((PINE & (1<<Copy_enumPinNum)) >> Copy_enumPinNum));
			}
			break;
		case DIO_enumPortF:
			/* If the pin is already defined as an output pin we do not have to read form it */
			if (((DDRF & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 1)
			{
				LOC_enumErrorState = DIO_enumTryingToReadFromOutputPin;
			}
			else
			{
				/* Reading the value of the entered pin */
				*Add_Pu8PinValue = (((PINF & (1<<Copy_enumPinNum)) >> Copy_enumPinNum));
			}
			break;
		case DIO_enumPortG:
			/* If the pin is already defined as an output pin we do not have to read form it */
			if (((DDRG & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 1)
			{
				LOC_enumErrorState = DIO_enumTryingToReadFromOutputPin;
			}
			else
			{
				/* Reading the value of the entered pin */
				*Add_Pu8PinValue = (((PING & (1<<Copy_enumPinNum)) >> Copy_enumPinNum));
			}
			break;


#endif /* #if (ATmega_Model == ATmega64_128) */

			/* If the port number is not in the range from port A to port D return an error state that the user
			 * inputed a wrong port number */
		default:
			LOC_enumErrorState =  DIO_enumWrongPort;
			break;
		}
	}
	return LOC_enumErrorState;
}

/**
 *@brief  : Function to Read the Logic State of the Port (Is it HIGH or LOW).
 *@param  : Port Number, Pointer points to unsigned char passed by address (to return the value of port state).
 *@return : Error State.
 */
DIO_enumError_t DIO_enumReadPortState(DIO_enumPorts_t Copy_enumPortNum, DIO_enumPortLogicState_t* Add_Pu8PortValue)
{
	/* A local variable to assign the error state inside it and use only one return in the whole function
	 * through returning the value of this local variable.
	 * Initially we assume that everything is OK, if not its value will be changed according to a definite error type */
	DIO_enumError_t LOC_enumErrorState = DIO_enumOk;

	/* Check if the entered pointer is a NULL pointer, we will not be able to dereference it */
	if (Add_Pu8PortValue == NULL_PTR)
	{
		LOC_enumErrorState = DIO_enumNullPointer;
	}
	else
	{
		/* See which port the user want to set the logic state of a pin inside it */
		switch (Copy_enumPortNum)
		{

#if ((ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128))

		case DIO_enumPortA:
			/* If the port is already defined as an output port we do not have to read form it */
			if (DDRA == DIO_enumPortConfigOutput)
			{
				LOC_enumErrorState = DIO_enumTryingToReadFromOutputPort;
			}
			else
			{
				/* Reading the value of the entered port */
				*Add_Pu8PortValue = PINA;
			}
			break;

#endif /* #if ((ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128)) */

		case DIO_enumPortB:
			/* If the port is already defined as an output port we do not have to read form it */
			if (DDRB == DIO_enumPortConfigOutput)
			{
				LOC_enumErrorState = DIO_enumTryingToReadFromOutputPort;
			}
			else
			{
				/* Reading the value of the entered port */
				*Add_Pu8PortValue = PINB;
			}
			break;
		case DIO_enumPortC:
			/* If the port is already defined as an output port we do not have to read form it */
			if (DDRC == DIO_enumPortConfigOutput)
			{
				LOC_enumErrorState = DIO_enumTryingToReadFromOutputPort;
			}
			else
			{
				/* Reading the value of the entered port */
				*Add_Pu8PortValue = PINC;
			}
			break;
		case DIO_enumPortD:
			/* If the port is already defined as an output port we do not have to read form it */
			if (DDRD == DIO_enumPortConfigOutput)
			{
				LOC_enumErrorState = DIO_enumTryingToReadFromOutputPort;
			}
			else
			{
				/* Reading the value of the entered port */
				*Add_Pu8PortValue = PIND;
			}
			break;

#if (ATmega_Model == ATmega64_128)

		case DIO_enumPortE:
			/* If the port is already defined as an output port we do not have to read form it */
			if (DDRE == DIO_enumPortConfigOutput)
			{
				LOC_enumErrorState = DIO_enumTryingToReadFromOutputPort;
			}
			else
			{
				/* Reading the value of the entered port */
				*Add_Pu8PortValue = PINE;
			}
			break;
		case DIO_enumPortF:
			/* If the port is already defined as an output port we do not have to read form it */
			if (DDRF == DIO_enumPortConfigOutput)
			{
				LOC_enumErrorState = DIO_enumTryingToReadFromOutputPort;
			}
			else
			{
				/* Reading the value of the entered port */
				*Add_Pu8PortValue = PINF;
			}
			break;
		case DIO_enumPortG:
			/* If the port is already defined as an output port we do not have to read form it */
			if (DDRG == DIO_enumPortConfigOutput)
			{
				LOC_enumErrorState = DIO_enumTryingToReadFromOutputPort;
			}
			else
			{
				/* Reading the value of the entered port */
				*Add_Pu8PortValue = PING;
			}
			break;

#endif /* #if (ATmega_Model == ATmega64_128) */

			/* If the port number is not in the range from port A to port D return an error state that the user
			 * inputed a wrong port number */
		default:
			LOC_enumErrorState =  DIO_enumWrongPort;
			break;
		}
	}
	return LOC_enumErrorState;
}

/**
 *@brief  : Function to toggle the logic state of the pin.
 *@param  : Port Number & Pin Number.
 *@return : Error State.
 */
DIO_enumError_t DIO_enumTogglePinState(DIO_enumPorts_t Copy_enumPortNum, DIO_enumPins_t Copy_enumPinNum)
{
	/* A local variable to assign the error state inside it and use only one return in the whole function
	 * through returning the value of this local variable.
	 * Initially we assume that everything is OK, if not its value will be changed according to a definite error type */
	DIO_enumError_t LOC_enumErrorState = DIO_enumOk;


#if (ATmega_Model == ATmega8)
	/* Check if the pin number is in the range from pin 0 to pin 7 or not,
	 * if not in the range return an error state that the user inputed a wrong pin number */
	if ((((Copy_enumPortNum == DIO_enumPortB) || (Copy_enumPortNum == DIO_enumPortD)) && ((Copy_enumPinNum < DIO_enumPin0) || (Copy_enumPinNum > DIO_enumPin7))) || (((Copy_enumPortNum == DIO_enumPortC)) && ((Copy_enumPinNum < DIO_enumPin0) || (Copy_enumPinNum > DIO_enumPin6))))
	{
		LOC_enumErrorState = DIO_enumWrongPin;
	}

#elif (ATmega_Model == ATmega16_32)
	/* Check if the pin number is in the range from pin 0 to pin 7 or not,
	 * if not in the range return an error state that the user inputed a wrong pin number */
	if ((Copy_enumPinNum < DIO_enumPin0) || (Copy_enumPinNum > DIO_enumPin7))
	{
		LOC_enumErrorState = DIO_enumWrongPin;
	}

#elif (ATmega_Model == ATmega64_128))
	/* Check if the pin number is in the range from pin 0 to pin 7 or not,
	 * if not in the range return an error state that the user inputed a wrong pin number */
	if ((((Copy_enumPortNum != DIO_enumPortG)) && ((Copy_enumPinNum < DIO_enumPin0) || (Copy_enumPinNum > DIO_enumPin7))) || (((Copy_enumPortNum == DIO_enumPortG)) && ((Copy_enumPinNum < DIO_enumPin0) || (Copy_enumPinNum > DIO_enumPin4))))
	{
		LOC_enumErrorState = DIO_enumWrongPin;
	}

#else
#error "You entered INVALID ATmega Model :("

#endif /* #if (ATmega_Model == ATmega8) */

	/* Seems like the user has inputed a pin number in the range, so we will check for the inputed port number
	 * and the inputed logic state */
	else
	{
		/* See which port the user want to set the logic state of a pin inside it */
		switch (Copy_enumPortNum)
		{

#if ((ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128))

		case DIO_enumPortA:
			/* If the pin is already defined as an input pin we should not write in it */
			if (((DDRA & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 0)
			{
				LOC_enumErrorState = DIO_enumTryingToWriteInInputPin;
			}
			else
			{
				/* Toggle the state of the entered pin */
				PORTA ^= (1<<Copy_enumPinNum);
			}
			break;

#endif /* #if ((ATmega_Model == ATmega16_32) || (ATmega_Model == ATmega64_128)) */

		case DIO_enumPortB:
			/* If the pin is already defined as an input pin we should not write in it */
			if (((DDRB & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 0)
			{
				LOC_enumErrorState = DIO_enumTryingToWriteInInputPin;
			}
			else
			{
				/* Toggle the state of the entered pin */
				PORTB ^= (1<<Copy_enumPinNum);
			}
			break;
		case DIO_enumPortC:
			/* If the pin is already defined as an input pin we should not write in it */
			if (((DDRC & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 0)
			{
				LOC_enumErrorState = DIO_enumTryingToWriteInInputPin;
			}
			else
			{
				/* Toggle the state of the entered pin */
				PORTC ^= (1<<Copy_enumPinNum);
			}
			break;
		case DIO_enumPortD:
			/* If the pin is already defined as an input pin we should not write in it */
			if (((DDRD & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 0)
			{
				LOC_enumErrorState = DIO_enumTryingToWriteInInputPin;
			}
			else
			{
				/* Toggle the state of the entered pin */
				PORTD ^= (1<<Copy_enumPinNum);
			}
			break;

#if (ATmega_Model == ATmega64_128)

		case DIO_enumPortE:
			/* If the pin is already defined as an input pin we should not write in it */
			if (((DDRE & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 0)
			{
				LOC_enumErrorState = DIO_enumTryingToWriteInInputPin;
			}
			else
			{
				/* Toggle the state of the entered pin */
				PORTE ^= (1<<Copy_enumPinNum);
			}
			break;
		case DIO_enumPortF:
			/* If the pin is already defined as an input pin we should not write in it */
			if (((DDRF & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 0)
			{
				LOC_enumErrorState = DIO_enumTryingToWriteInInputPin;
			}
			else
			{
				/* Toggle the state of the entered pin */
				PORTF ^= (1<<Copy_enumPinNum);
			}
			break;
		case DIO_enumPortG:
			/* If the pin is already defined as an input pin we should not write in it */
			if (((DDRG & (1<<Copy_enumPinNum)) >> Copy_enumPinNum) == 0)
			{
				LOC_enumErrorState = DIO_enumTryingToWriteInInputPin;
			}
			else
			{
				/* Toggle the state of the entered pin */
				PORTG ^= (1<<Copy_enumPinNum);
			}
			break;

#endif /* #if (ATmega_Model == ATmega64_128) */

		/* If the port number is not in the range from port A to port D return an error state that the user
		 * inputed a wrong port number */
		default:
			LOC_enumErrorState =  DIO_enumWrongPort;
			break;
		}
	}
	return LOC_enumErrorState;
}

/*
 * Description :
 * This Function Provide a delay in millieseconds
 * You shall define the F_CPU before using it or it will be a default value of 1Mhz
 */
void DIO_DelayMs(uint32 Copy_u32TimeMs)
{
	/* Calculate the number of cycles needed for the delay, 8000UL represent number of cycles per second */
	uint32 cycles = (F_CPU / 8000UL) * Copy_u32TimeMs;
    for (uint32 i = 0; i < cycles; i++)
    {
		  asm volatile("nop");
    }

}
