#include "bsp.h"
#include "app_trace.h"
#include "stm3210c_eval.h"
#include "boards.h"
#include "stm32f10x.h"

void GPIO_Configuration(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;
    
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);

    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_InitStructure.GPIO_Pin = KEY_BUTTON_PIN;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
    GPIO_Init(KEY_BUTTON_GPIO_PORT, &GPIO_InitStructure); //°´¼üKEY1
}

void BSP_Init(void)
{
    app_trace_init();
    APP_LOG("[APP]:----------Repeater--------------\r\n"); 
    GPIO_Configuration();    
}
