#ifndef _APP_TRACE_H_
#define _APP_TRACE_H_

#include <stdio.h>

#ifdef APP_LOGS
    #define USB_LOG     printf
    #define APP_LOG     printf
#else
    #define USB_LOG(...)
    #define APP_LOG(...)
#endif // End of #ifdef APP_LOGS

void app_trace_init(void);

#endif // End of _APP_TRACE_H_
