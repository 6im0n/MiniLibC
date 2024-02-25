; FILE: memcpy.asm
; DESCRIPTION: This file contains the implementation of the memcpy function in assembly language.
; AUTHOR: Simon Ganier-Lombard
; DATE: [feb 2024]

BITS 64
SECTION .text
global memcpy

memcpy:

    enter 0, 0
    mov rax, 0
    mov rbx, 0

    .loop:
        cmp rdx , 0
        je .done
        mov al, [rsi + rbx]
        mov [rdi + rbx], al
        inc rbx
        dec rdx
        jmp .loop

    .done:
        mov rax, rdi
        leave
        ret