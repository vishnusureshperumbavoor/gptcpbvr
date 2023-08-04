.include "M32DEF.INC"
.org 00
ldi r16,0x74
ldi r17,0x23
ldi r19,0x54
add r16,r17
sub r19,r17
ldi r18,0x02
mul r18,r17
end: jmp end