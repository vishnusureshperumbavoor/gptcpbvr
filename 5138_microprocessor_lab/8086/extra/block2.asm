.model small 
.stack 100h
.code 

mov si,2000h 

up: mov al,[si]
    inc si 
    jnz up 

mov ah,4ch 
int 21h 
end 