#include <8052.h>

//! function delay
//! sama seperti pada contoh assembly
//! pada hw asli ini berisi loop sampai 1detik namum
//! pada simulasi sangat mengganggu karena simulasi
//! tidak secepat hw asli. jadi diganti dengan delay
//! 1clock.
void delay(void)
{
    __asm
    nop
    __endasm;
}

//! fungsi main
void main(void)
{
    while(1){        // loop awal
        P1_0=0;      // pin P1.0 == 0v
        delay();     // delay
        P1_0=1;      // pin P1.0 == 5v
        delay();     // delay
    }                // ulang ke awal lagi
}
