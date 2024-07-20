#ifndef _BIT_OPERATIONS_H_
#define _BIT_OPERATIONS_H_

#include "./std_types.h"


/*              MACROS DECLARATION                */

#define         BIT_MASK0           ((UINT8) 0x01)
#define         BIT_MASK1           ((UINT8) 0x02)
#define         BIT_MASK2           ((UINT8) 0x04)
#define         BIT_MASK3           ((UINT8) 0x08)
#define         BIT_MASK4           ((UINT8) 0x10)
#define         BIT_MASK5           ((UINT8) 0x20)
#define         BIT_MASK6           ((UINT8) 0x40)
#define         BIT_MASK7           ((UINT8) 0x80)

/*              MACRO FUNCTIONS DECLARATION         */


#define         BIT_SET(REGISTER,BIT)         ((REGISTER) |= (1<<(BIT)))
#define         BIT_CLEAR(REGISTER,BIT)       ((REGISTER) &= ~(1<<(BIT)))
#define         BIT_TOGGLE(REGISTER,BIT)      ((REGISTER) ^= (1<<(BIT)))
#define         BIT_READ(REGISTER,BIT)        (((REGISTER)>>(BIT)) & 1)








#endif