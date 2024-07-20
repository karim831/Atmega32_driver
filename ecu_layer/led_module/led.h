#ifndef _LED_H_
#define _LED_H_

#include  "../../general_module/libraries.h"
#include "../../mcal_layer/dio_module/dio.h"

/*              MACROS DECLARATION              */

#define             LED_OFF             ((UINT8)0x00)
#define             LED_ON              ((UINT8)0x01)

/*              DRIVERS DECLARATION             */

NO_RETURN led_init(UINT8 port,UINT8 pin,UINT8 status);
NO_RETURN led_on(UINT8 port,UINT8 pin);
NO_RETURN led_off(UINT8 port,UINT8 pin);

#endif
