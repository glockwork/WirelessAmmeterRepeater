#include "bsp.h"
#include "app_trace.h"
#include <stdio.h>
#include "boards.h"
#include "stm32f10x.h"

void BSP_Init(void)
{
    app_trace_init();
    APP_LOG("[APP]:----------Repeater--------------\r\n");  
}

