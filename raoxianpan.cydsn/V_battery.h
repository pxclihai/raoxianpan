/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#ifndef _BATTERY_H
#define	_BATTERY_H

#include <project.h>
    
#define SampleNum  100
    
uint16 B_V;

uint16 Get_Battery_ADvalue();
void Monitor_Battery_Init();
void Cal_Battery_loop();
#endif
/* [] END OF FILE */
