.model small
.stack 100h

.data
data1 db 'VSP'
data2 db 'VSe'
gud db "strings are same $"
bad db "strings are different $"

.code
mov ax,@data
mov ds,ax
mov es,ax 
lea si,data1
lea di,data2 
mov cx,3

repe cmpsb 
jnz bottom
lea dx,gud 
jmp bottom2

bottom: lea dx,bad 
bottom2: mov ah,09h
int 21h

mov ah,4ch 
int 21h 
end  
