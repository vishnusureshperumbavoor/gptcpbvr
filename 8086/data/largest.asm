.model small 
.stack 100h 

.data 
num db 10h,05h,30h 

.code 
mov ax,@data 
mov ds,ax 
mov cx,03h 
mov al,0h 
lea si,num 
top: mov bl,[si] 
inc si  
cmp al,bl 
jnc nocarry 
mov al,bl  
nocarry: dec cx 
jnz top  
mov si,2000h
mov [si],al 

mov ah,4ch 
int 21h 
end 