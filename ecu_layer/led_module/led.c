#include "./led.h"

NO_RETURN led_init(UINT8 port,UINT8 pin,UINT8 status){
    switch(status){
        case LED_OFF :
            led_off(port,pin);
            break;
        case LED_ON :
            led_on(port,pin);
            break;
        default:;
    }
}
NO_RETURN led_on(UINT8 port,UINT8 pin){
    dio_out_high_pin(port,pin);
}
NO_RETURN led_off(UINT8 port,UINT8 pin){
    dio_out_low_pin(port,pin);
}