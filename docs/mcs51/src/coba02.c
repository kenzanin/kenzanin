#include <8052.h>

void delay(void)
{
    __asm
    nop
    __endasm;
}


void main(void)
{
    while(1){
        P1_0=0;
        delay();
        P1_0=1;
        delay();
    }
}
