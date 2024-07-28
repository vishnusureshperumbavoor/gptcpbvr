.include "m32def.inc"
ldi r16,low(ramend)
ldi r17,high(ramend)
out spl,r16
out sph,r17
ldi r17,0xff
out ddrd,r17
sbi portd,0
rcall delay
sbi portd,1
rcall delay
sbi portd,2
rcall delay
sbi portd,3
rcall delay
sbi portd,4
rcall delay
sbi portd,5
rcall delay
sbi portd,6
rcall delay
sbi portd,7
rcall delay
delay: ldi r18,0x02
again: nop
	nop
	dec r18
	brne again
ret
end:jmp end