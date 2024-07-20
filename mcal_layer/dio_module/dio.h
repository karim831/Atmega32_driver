#ifndef _DIO_H_
#define _DIO_H_

#include "../../general_module/libraries.h"



/*                  MACROS  DECLARATION                 */
#define         DIO_PORTA                   ((UINT8)0x00)           
#define         DIO_PORTB                   ((UINT8)0x01)           
#define         DIO_PORTC                   ((UINT8)0x02)           
#define         DIO_PORTD                   ((UINT8)0x03)



#define         DIO_PIN0                    ((UINT8)0x00)
#define         DIO_PIN1                    ((UINT8)0x01)
#define         DIO_PIN2                    ((UINT8)0x02)
#define         DIO_PIN3                    ((UINT8)0x03)
#define         DIO_PIN4                    ((UINT8)0x04)
#define         DIO_PIN5                    ((UINT8)0x05)
#define         DIO_PIN6                    ((UINT8)0x06)
#define         DIO_PIN7                    ((UINT8)0x07)


#define         DIO_IN_PUP_DISABLE          ((UINT8)0x00)                                  
#define         DIO_IN_PUP_ENABLE           ((UINT8)0x01)                        
#define         DIO_OUT_HIGH                ((UINT8)0x02)                    
#define         DIO_OUT_LOW                 ((UINT8)0x03)                

/*                  DRIVERS DECLARATIONS                */


NO_RETURN dio_init_pin(UINT8 port,UINT8 pin,UINT8 operation);
NO_RETURN dio_in_pup_pin(UINT8 port,UINT8 pin);
NO_RETURN dio_in_npup_pin(UINT8 port,UINT8 pin);
NO_RETURN dio_out_high_pin(UINT8 port,UINT8 pin);
NO_RETURN dio_out_low_pin(UINT8 port,UINT8 pin);
NO_RETURN dio_toggle_pin(UINT8 port,UINT8 pin);
RETURN    dio_read_pin(UINT8 port,UINT8 pin);





#endif