.model small 
.stack 100h

.data
evennum db 10,"even number $"
oddnum db 10,"odd number $"

.code 
mov ax,@data
mov ds,ax 

mov al,01h
int 21h 

mov bl,02h 
div bl 
cmp ah,0 
je bottom
lea dx,oddnum
jmp bottom2
bottom: lea dx,evennum
bottom2: mov ah,9
int 21h 

mov ah,4ch 
int 21h 
end 