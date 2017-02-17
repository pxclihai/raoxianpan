/*******************************************************************************
* File Name: PUL_P.h  
* Version 2.10
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_PUL_P_H) /* Pins PUL_P_H */
#define CY_PINS_PUL_P_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "PUL_P_aliases.h"

/* Check to see if required defines such as CY_PSOC5A are available */
/* They are defined starting with cy_boot v3.0 */
#if !defined (CY_PSOC5A)
    #error Component cy_pins_v2_10 requires cy_boot v3.0 or later
#endif /* (CY_PSOC5A) */

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 PUL_P__PORT == 15 && ((PUL_P__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

void    PUL_P_Write(uint8 value) ;
void    PUL_P_SetDriveMode(uint8 mode) ;
uint8   PUL_P_ReadDataReg(void) ;
uint8   PUL_P_Read(void) ;
uint8   PUL_P_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define PUL_P_DM_ALG_HIZ         PIN_DM_ALG_HIZ
#define PUL_P_DM_DIG_HIZ         PIN_DM_DIG_HIZ
#define PUL_P_DM_RES_UP          PIN_DM_RES_UP
#define PUL_P_DM_RES_DWN         PIN_DM_RES_DWN
#define PUL_P_DM_OD_LO           PIN_DM_OD_LO
#define PUL_P_DM_OD_HI           PIN_DM_OD_HI
#define PUL_P_DM_STRONG          PIN_DM_STRONG
#define PUL_P_DM_RES_UPDWN       PIN_DM_RES_UPDWN

/* Digital Port Constants */
#define PUL_P_MASK               PUL_P__MASK
#define PUL_P_SHIFT              PUL_P__SHIFT
#define PUL_P_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define PUL_P_PS                     (* (reg8 *) PUL_P__PS)
/* Data Register */
#define PUL_P_DR                     (* (reg8 *) PUL_P__DR)
/* Port Number */
#define PUL_P_PRT_NUM                (* (reg8 *) PUL_P__PRT) 
/* Connect to Analog Globals */                                                  
#define PUL_P_AG                     (* (reg8 *) PUL_P__AG)                       
/* Analog MUX bux enable */
#define PUL_P_AMUX                   (* (reg8 *) PUL_P__AMUX) 
/* Bidirectional Enable */                                                        
#define PUL_P_BIE                    (* (reg8 *) PUL_P__BIE)
/* Bit-mask for Aliased Register Access */
#define PUL_P_BIT_MASK               (* (reg8 *) PUL_P__BIT_MASK)
/* Bypass Enable */
#define PUL_P_BYP                    (* (reg8 *) PUL_P__BYP)
/* Port wide control signals */                                                   
#define PUL_P_CTL                    (* (reg8 *) PUL_P__CTL)
/* Drive Modes */
#define PUL_P_DM0                    (* (reg8 *) PUL_P__DM0) 
#define PUL_P_DM1                    (* (reg8 *) PUL_P__DM1)
#define PUL_P_DM2                    (* (reg8 *) PUL_P__DM2) 
/* Input Buffer Disable Override */
#define PUL_P_INP_DIS                (* (reg8 *) PUL_P__INP_DIS)
/* LCD Common or Segment Drive */
#define PUL_P_LCD_COM_SEG            (* (reg8 *) PUL_P__LCD_COM_SEG)
/* Enable Segment LCD */
#define PUL_P_LCD_EN                 (* (reg8 *) PUL_P__LCD_EN)
/* Slew Rate Control */
#define PUL_P_SLW                    (* (reg8 *) PUL_P__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define PUL_P_PRTDSI__CAPS_SEL       (* (reg8 *) PUL_P__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define PUL_P_PRTDSI__DBL_SYNC_IN    (* (reg8 *) PUL_P__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define PUL_P_PRTDSI__OE_SEL0        (* (reg8 *) PUL_P__PRTDSI__OE_SEL0) 
#define PUL_P_PRTDSI__OE_SEL1        (* (reg8 *) PUL_P__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define PUL_P_PRTDSI__OUT_SEL0       (* (reg8 *) PUL_P__PRTDSI__OUT_SEL0) 
#define PUL_P_PRTDSI__OUT_SEL1       (* (reg8 *) PUL_P__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define PUL_P_PRTDSI__SYNC_OUT       (* (reg8 *) PUL_P__PRTDSI__SYNC_OUT) 


#if defined(PUL_P__INTSTAT)  /* Interrupt Registers */

    #define PUL_P_INTSTAT                (* (reg8 *) PUL_P__INTSTAT)
    #define PUL_P_SNAP                   (* (reg8 *) PUL_P__SNAP)

#endif /* Interrupt Registers */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_PUL_P_H */


/* [] END OF FILE */
