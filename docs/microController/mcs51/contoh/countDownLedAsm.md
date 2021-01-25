# Intro 

Sama seperti contoh [Count Down Led C](countDownLed.md) cuman ini pakai assembly.

## The Code
```asm
var01 equ 0x30  ; buat variable var01
                ; dengan type byte

jmp main

delay:
    nop
    ret
    
main:
    mov P1,#0xff

    mov R0,#0x30  ; isi variable var01 dengan nilai 255
    mov @R0,#255  ; di dalam asm kayak gini cara isi variable
                  ; ndak bisa langsung hehe.

mainFor1:
    mov P1,var01
    djnz var01,mainFor1 ; djnz, decrese jump if var01 not zero ke mainFor1
    call delay
    jmp main
end
```