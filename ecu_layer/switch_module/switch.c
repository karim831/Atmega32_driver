#include "./switch.h"

NO_RETURN switch_init(UINT8 port,UINT8 pin,UINT8 connection){
    if(connection == SWITCH_NO_PULL)
        dio_in_pup_pin(port,pin);
    else
        dio_in_npup_pin(port,pin);
}



RETURN switch_read(UINT8 port,UINT8 pin,UINT8 connection){
    switch(connection){
        case SWITCH_PULL_UP:
            if(dio_read_pin(port,pin))
                return SWITCH_CLOSED;
            else
                return SWITCH_OPENED;
        default :
            if(dio_read_pin(port,pin))
                return SWITCH_OPENED;
            else
                return SWITCH_CLOSED;
    }
}