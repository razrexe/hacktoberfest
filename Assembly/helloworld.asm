section .text
    global _start

_start:
    mov edx,length ; This is the length of the message
    mov ecx,message ; The text
    mov ebx,1 ; file discriptor
    mov eax,4 ; system write
    int 0x80

    mov eax,1 ; system exit 
    int 0x80

section .data
    message db "Hello world from assembly !", 0xa
    length equ $ - message