.include "m32def.inc"
.org 00
clr r20
ldi r16,3
ldi r17,10
l1: add r20,r16
dec r17
brne r17
end: jmp end