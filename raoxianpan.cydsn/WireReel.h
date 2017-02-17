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
#ifndef _WIREREEL_H
#define	_WIREREEL_H
#include <project.h>
enum CAR_DIR{UP,DOWN,LEFT,RIGHT,
             UP_LEFT,UP_RIGHT,DOWN_LEFT,DOWN_RIGHT,
             STOP
            };

enum WHEEL_DIR{FORWARD,REVERSAL,WHEEL_STOP};

typedef struct 
{
   uint16 pwm;
   enum WHEEL_DIR dir;
}S_WHEEL;  
typedef struct 
{
    uint8 Car_lock;
    enum CAR_DIR set_dir;
    uint16 set_car_speed;
    S_WHEEL  left_front_wheel;
    S_WHEEL  left_behind_wheel;
    S_WHEEL  right_front_wheel;
    S_WHEEL  right_behind_wheel;
    uint16   set_pull;
    uint8    control_dir;
    uint8    control_flag;
    uint16    control_speed;
  
    uint16 pull_max;
    uint16 pull_min;
    uint8  pull_dir;
}S_CAR;
S_CAR g_Car;
typedef struct
{
    uint8  run_state; 
    uint8  hearting;
    uint8  error;
    uint16 B_V;
   
   
}S_WIREREEL;
S_WIREREEL g_WireReel;
void WireReel_init();
void WireReel_control_Loop();
#endif
/* [] END OF FILE */
