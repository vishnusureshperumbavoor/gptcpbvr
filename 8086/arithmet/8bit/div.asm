.model small 
.stack 100h 
.code 

mov ah,00h
mov al,09h 
mov bl,02h 
div bl 

mov ah,4ch 
int 21h 
end 