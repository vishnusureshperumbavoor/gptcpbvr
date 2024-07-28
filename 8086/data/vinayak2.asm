.model small 
.stack 100h

.data
var1 db 'input a number $'
var2 db 10,13, 'entered number is $'

.code 
mov ax,@data
mov ds,ax
mov dx,offset var1
mov ah,9
int 21h
mov ah,01h
int 21h 
mov dx,offset var2
mov ah,9
int 21h
mov ah,4ch 
int 21h 
end 