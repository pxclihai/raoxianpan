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
#include <project.h>
#include "Transfer.h"
#include "key.h"
#include "buzzer.h"

char8 command_connect[] = "AT+CONNL";

extern uint8 time_5ms_state;
extern uint8 time_1s_state;
uint8 togle;
uint8 hearting_error;
uint8 count;

int main()
{
    
    CyGlobalIntEnable; /* Enable global interrupts. */
  
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    UART_net_Init();
     
    UART_net_Start();
 
    Timer_1_Start(); 
    isr_timer_Start();
    
    isr_rx_net_Start();
 
    UART_net_PutString(command_connect);
    PWM_1_Start();
    ENA_Write(1);
    CyDelay(5);
    PWM_1_Stop();
    g_Car.set_pull = 0;
    g_Car.pull_max = 1200;
    g_Car.pull_min = 860;
    PWM_1_WritePeriod(4000);
    
    hearting_error = 1;
    for(;;)
    {
      /* Place your application code here. */
    
        if( time_1s_state == 1)
        {
            
          time_1s_state = 0;
          if(g_Car.hearting == 1)
          {
             g_Car.hearting = 0;
             hearting_error = 0;
          }
          else
          {
            //g_Car.set_car_speed = 0;
           // g_Car.set_dir = STOP;
            hearting_error = 1;
          }  
        }
        
        if(time_5ms_state ==  1)
        {
            if(hearting_error == 0)
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
            
//            if(togle == 0)
//            {
//                DIR_Write(0);
//                CyDelay(1);
//                PWM_1_Stop();
//             // PUL_Write(1);
//                togle = 1;
//            }
//            else
//            {
//                //  PUL_Write(0);
//            
//            }
            time_5ms_state = 0;
        }
    }
}

/* [] END OF FILE */
