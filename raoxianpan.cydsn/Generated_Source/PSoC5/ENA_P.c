/*******************************************************************************
* File Name: ENA_P.c  
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
#include "ENA_P.h"

/* APIs are not generated for P15[7:6] on PSoC 5 */
#if !(CY_PSOC5A &&\
	 ENA_P__PORT == 15 && ((ENA_P__MASK & 0xC0) != 0))


/*******************************************************************************
* Function Name: ENA_P_Write
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
void ENA_P_Write(uint8 value) 
{
    uint8 staticBits = (ENA_P_DR & (uint8)(~ENA_P_MASK));
    ENA_P_DR = staticBits | ((uint8)(value << ENA_P_SHIFT) & ENA_P_MASK);
}


/*******************************************************************************
* Function Name: ENA_P_SetDriveMode
********************************************************************************
*
* Summary:
*  Change the drive mode on the pins of the port.
* 
* Parameters:  
*  mode:  Change the pins to one of the following drive modes.
*
*  ENA_P_DM_STRONG     Strong Drive 
*  ENA_P_DM_OD_HI      Open Drain, Drives High 
*  ENA_P_DM_OD_LO      Open Drain, Drives Low 
*  ENA_P_DM_RES_UP     Resistive Pull Up 
*  ENA_P_DM_RES_DWN    Resistive Pull Down 
*  ENA_P_DM_RES_UPDWN  Resistive Pull Up/Down 
*  ENA_P_DM_DIG_HIZ    High Impedance Digital 
*  ENA_P_DM_ALG_HIZ    High Impedance Analog 
*
* Return: 
*  None
*
*******************************************************************************/
void ENA_P_SetDriveMode(uint8 mode) 
{
	CyPins_SetPinDriveMode(ENA_P_0, mode);
}


/*******************************************************************************
* Function Name: ENA_P_Read
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
*  Macro ENA_P_ReadPS calls this function. 
*  
*******************************************************************************/
uint8 ENA_P_Read(void) 
{
    return (ENA_P_PS & ENA_P_MASK) >> ENA_P_SHIFT;
}


/*******************************************************************************
* Function Name: ENA_P_ReadDataReg
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
uint8 ENA_P_ReadDataReg(void) 
{
    return (ENA_P_DR & ENA_P_MASK) >> ENA_P_SHIFT;
}


/* If Interrupts Are Enabled for this Pins component */ 
#if defined(ENA_P_INTSTAT) 

    /*******************************************************************************
    * Function Name: ENA_P_ClearInterrupt
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
    uint8 ENA_P_ClearInterrupt(void) 
    {
        return (ENA_P_INTSTAT & ENA_P_MASK) >> ENA_P_SHIFT;
    }

#endif /* If Interrupts Are Enabled for this Pins component */ 

#endif /* CY_PSOC5A... */

    
/* [] END OF FILE */
