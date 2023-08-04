.include "m32def.inc"
.org 00
ldi r16,0x34
ldi r17,0
ldi r18,0
ldi r19,8
d1: ror r16
brcc l1
inc r17
rjmp l2
l1: inc r18
l2: dec r19
brne d1
end: jmp end