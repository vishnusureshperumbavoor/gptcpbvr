.include "m32def.inc"
ldi r16,low(ramend)
out spl,r16
ldi r16,high(ramend)
out sph,r16
out ddrb,r16
repeat:sbi portb,3
rcall delay
cbi portb,3
rcall delay
delay:ldi r18,0x02
again:nop
nop
dec r18
brne again
ret