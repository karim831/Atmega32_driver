#ifndef _SWITCH_H_
#define _SWITCH_H_

#include  "../../general_module/libraries.h"
#include "../../mcal_layer/dio_module/dio.h"

/*          MACROS DECLARATION          */

#define         SWITCH_NO_PULL          ((UINT8)0x00)
#define         SWITCH_PULL_DOWN        ((UINT8)0x01)
#define         SWITCH_PULL_UP          ((UINT8)0x02)

#define         SWITCH_OPENED           ((UINT8)0x00)
#define         SWITCH_CLOSED           ((UINT8)0x01)

/*          FUNCTIONS DECLARATION       */

NO_RETURN switch_init(UINT8 port,UINT8 pin,UINT8 connection);
RETURN switch_read(UINT8 port,UINT8 pin,UINT8 connection);
#endif
