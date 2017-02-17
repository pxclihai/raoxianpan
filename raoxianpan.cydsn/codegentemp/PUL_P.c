/*******************************************************************************
* File Name: PUL_P.c  
* Version 2.10
*
* Description:
*  This file contains API to enable firmware control of a Pins component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#include "cytypes.h"
#include "PUL_P.h"

/* APIs are not generated for P15[7:6] on PSoC 5 */
#if !(CY_PSOC5A &&\
	 PUL_P__PORT == 15 && ((PUL_P__MASK & 0xC0) != 0))


/*******************************************************************************
* Function Name: PUL_P_Write
********************************************************************************
*
* Summary:
*  Assign a new value to the digital port's data output register.  
*
* Parameters:  
*  prtValue:  The value to be assigned to the Digital Port. 
*
* Return: 
*  None
*  
*******************************************************************************/
void PUL_P_Write(uint8 value) 
{
    uint8 staticBits = (PUL_P_DR & (uint8)(~PUL_P_MASK));
    PUL_P_DR = staticBits | ((uint8)(value << PUL_P_SHIFT) & PUL_P_MASK);
}


/*******************************************************************************
* Function Name: PUL_P_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  PUL_P_DM_STRONG     Strong Drive 
*  PUL_P_DM_OD_HI      Open Drain, Drives High 
*  PUL_P_DM_OD_LO      Open Drain, Drives Low 
*  PUL_P_DM_RES_UP     Resistive Pull Up 
*  PUL_P_DM_RES_DWN    Resistive Pull Down 
*  PUL_P_DM_RES_UPDWN  Resistive Pull Up/Down 
*  PUL_P_DM_DIG_HIZ    High Impedance Digital 
*  PUL_P_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void PUL_P_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(PUL_P_0, mode);
}


/*******************************************************************************
* Function Name: PUL_P_Read
********************************************************************************
*
* Summary:
*  Read the current value on the pins of the Digital Port in right justified 
*  form.
*
* Parameters:  
*  None
*
* Return: 
*  Returns the current value of the Digital Port as a right justified number
*  
* Note:
*  Macro PUL_P_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 PUL_P_Read(void) 
{
    return (PUL_P_PS & PUL_P_MASK) >> PUL_P_SHIFT;
}


/*******************************************************************************
* Function Name: PUL_P_ReadDataReg
********************************************************************************
*
* Summary:
*  Read the current value assigned to a Digital Port's data output register
*
* Parameters:  
*  None 
*
* Return: 
*  Returns the current value assigned to the Digital Port's data output register
*  
*******************************************************************************/
uint8 PUL_P_ReadDataReg(void) 
{
    return (PUL_P_DR & PUL_P_MASK) >> PUL_P_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(PUL_P_INTSTAT) 

    /*******************************************************************************
    * Function Name: PUL_P_ClearInterrupt
    ********************************************************************************
    * Summary:
    *  Clears any active interrupts attached to port and returns the value of the 
    *  interrupt status register.
    *
    * Parameters:  
    *  None 
    *
    * Return: 
    *  Returns the value of the interrupt status register
    *  
    *******************************************************************************/
    uint8 PUL_P_ClearInterrupt(void) 
    {
        return (PUL_P_INTSTAT & PUL_P_MASK) >> PUL_P_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 

#endif /* CY_PSOC5A... */

    
/* [] END OF FILE */
