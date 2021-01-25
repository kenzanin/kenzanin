# Count Up Led Assembly

Sebagai perbandingan antara C dengan Assembly. headache

## The Code

```asm
var01 equ 0x30  ; buat variable var01
                ; dengan type byte

jmp main

delay:
    nop
    ret
    
main:
    mov P1,#0h

    mov R0,#var01 ; isi variable var01 dengan nilai 255
    mov @R0,#255  ; di dalam asm kayak gini cara isi variable
                  ; ndak bisa langsung hehe.

mainFor1:
    inc P1
    djnz var01,mainFor1 ; djnz, decrese jump if var01 not zero ke mainFor1
    call delay
    jmp main
end
```