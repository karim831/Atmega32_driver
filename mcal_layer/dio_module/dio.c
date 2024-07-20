#include "./dio.h"

static volatile UINT8 *ddx[] = {&DDRA,&DDRB,&DDRC,&DDRD}; 
static volatile UINT8 *portx[] = {&PORTA,&PORTB,&PORTC,&PORTD}; 
static volatile UINT8 *pinx[] = {&PINA,&PINB,&PINC,&PIND}; 


NO_RETURN dio_init_pin(UINT8 port,UINT8 pin,UINT8 operation){
    switch(operation){
        case DIO_IN_PUP_DISABLE :
            dio_in_npup_pin(port,pin);
            break;
        case DIO_IN_PUP_ENABLE :
            dio_in_pup_pin(port,pin);
            break;
        case DIO_OUT_HIGH :
            dio_out_high_pin(port,pin);
            break;
        case DIO_OUT_LOW :
            dio_out_low_pin(port,pin);
            break;
        default :;
    }
}
NO_RETURN dio_in_pup_pin(UINT8 port,UINT8 pin){
    BIT_CLEAR(*ddx[port],pin);
    BIT_SET(*portx[port],pin);
}
NO_RETURN dio_in_npup_pin(UINT8 port,UINT8 pin){
    BIT_CLEAR(*ddx[port],pin);
    BIT_CLEAR(*portx[port],pin);
}
NO_RETURN dio_out_high_pin(UINT8 port,UINT8 pin){
    BIT_SET(*ddx[port],pin);
    BIT_SET(*portx[port],pin);
}
NO_RETURN dio_out_low_pin(UINT8 port,UINT8 pin){
    BIT_SET(*ddx[port],pin);
    BIT_CLEAR(*portx[port],pin);
}
NO_RETURN dio_out_toggle_pin(UINT8 port,UINT8 pin){
    BIT_TOGGLE(*portx[port],pin);
}


RETURN dio_read_pin(UINT8 port,UINT8 pin){
    return BIT_READ(*pinx[port],pin);
}