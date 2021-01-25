#include <8052.h>
#include <stdint.h>

void delay(void)
{
    __asm
    nop
    __endasm;
}

void main(void)
{
    while(1){
    uint8_t i;
        for(i=0 ; i<0xff ; i++)
        {
            P1=i;
            delay();
        }
    }                
}
