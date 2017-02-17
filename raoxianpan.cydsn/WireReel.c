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
#include "WireReel.h"

static uint8 togle;
void WireReel_init()
{
    g_WireReel.run_state = 1;
}
void g_WireReel_Hearting_Loop()
{
    if(g_WireReel.hearting == 1  )
    {
        g_WireReel.hearting = 0;
        g_WireReel.error = 0;
    }
    else
    {
        g_WireReel.error = 1;
    }  
}      
void WireReel_control_Loop()
{
     if(g_WireReel.error == 0)
            {
                if((g_Car.control_flag == 0 && g_Car.set_pull >100  && (g_Car.set_dir == 0))||g_Car.set_pull > 2000)
                {
                    if(g_Car.set_pull      >=   g_Car.pull_max )
                    {
                        ENA_Write(1);
                        CyDelayUs(20);
                        DIR_Write(1);
                        CyDelayUs(1000);
                        PWM_1_Start();
                        togle = 0;
                    }
                    else if(g_Car.set_pull <=   g_Car.pull_min)
                    {
                        ENA_Write(1);
                        CyDelayUs(20);
                        DIR_Write(0);
                        CyDelayUs(1000);
                        PWM_1_Start();
                        togle = 0;
                    }
                    else
                    {
                        ENA_Write(0);
                        PWM_1_Stop();
                    }
                }
                else
                {
                    
                    if(g_Car.control_dir == 1)
                    {
                        ENA_Write(1);
                        CyDelayUs(20);
                        DIR_Write(1);
                        CyDelayUs(1000);
                        PWM_1_Start();
                        togle = 0;
                    }
                    else if (g_Car.control_dir == 2)
                    {
                        ENA_Write(1);
                        CyDelayUs(20);
                        DIR_Write(0);
                        CyDelayUs(1000);
                        PWM_1_Start();
                        togle = 0;
                    }
                    else
                    {
                        
                        
                       // g_Car.control_flag = 0 ;
                      //  count = 0;
                        
                        ENA_Write(0);
                        PWM_1_Stop();
                    }
                }
            
            }
            else
            {
                 g_Car.control_flag = 0 ;
                 ENA_Write(0);
                 PWM_1_Stop();
            }
}

/* [] END OF FILE */
