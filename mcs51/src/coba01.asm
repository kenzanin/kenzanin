jmp main

delay:  ; delay
	nop ; seharusnya disini dibuat looping sampai sampai 1s
	    ; masalahnya untuk simulasi hal ini sangat menggangu
	    ; karena simulasi tidak secepat hardware asli.
	    ; jadi untuk simulasi digunakan nop == 1clock
	ret

main:            ; main
	setb p1.0    ; set == buat high p1.0
	call delay   ; delay 1s
	clr p1.0     ; clr == buat low p1.0
	call delay   ; delay 1s
	jmp main     ; lompat ke main
end