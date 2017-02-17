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
#include "V_battery.h"
#include "WireReel.h"
#include "multi_timer.h"
extern uint8 time_5ms_state;
extern uint8 time_1s_state;


uint8 count;
struct Timer Cal_battery_timer;
struct Timer Data_exchange_timer;
struct Timer WireReel_hearting_timer;
struct Timer WireReel_control_timer;
int main()
{
    
    CyGlobalIntEnable; /* Enable global interrupts. */
  
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    UART_net_Start();
 
    Timer_1_Start(); 
    isr_timer_Start();
    isr_rx_net_Start();
    
    PWM_1_Start();
    ENA_Write(1);
    CyDelay(5);
    PWM_1_Stop();
    
    g_Car.set_pull = 0;
    g_Car.pull_max = 1200;
    g_Car.pull_min = 860;
    PWM_1_WritePeriod(4000);
    
    hearting_error = 1;
    
    WireReel_init();
    Monitor_Battery_Init();
   
    timer_init (&Cal_battery_timer, Cal_Battery_loop, 100, 100);
    timer_start(&Cal_battery_timer);
    timer_init(&Data_exchange_timer, DT_Data_Exchange, 1000, 10);
    timer_start(&Data_exchange_timer);
    timer_init (&WireReel_hearting_timer, WireReel_Hearting_Loop, 0, 1000);
    timer_start(&WireReel_hearting_timer);
    
    timer_init (&WireReel_control_timer, WireReel_control_Loop, 0, 5);
    timer_start(&WireReel_control_timer);
    for(;;)
    {
      /* Place your application code here. */
    
        
        if(time_5ms_state ==  1)
        {
           
            
            time_5ms_state = 0;
        }
        timer_loop();
    }  
}

/* [] END OF FILE */
