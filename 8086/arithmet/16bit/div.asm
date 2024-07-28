.model small 
.stack 100h
.code 

mov ax,0FADEh
mov bx,01234h
div bx 

mov ah,4ch 
int 21h
end