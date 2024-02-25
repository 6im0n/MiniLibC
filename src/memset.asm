; FILE: memset.asm
; DESCRIPTION: This file contains the implementation of the memset function in assembly language.
; AUTHOR: Simon Ganier-Lombard
; DATE: [feb 2024]

BITS 64
SECTION .text
global memset

memset:

    enter 0, 0
    mov rax, 0
    mov rbx, 0

    .loop:
        cmp rdx , 0
        je .done
        mov [rdi + rbx], sil
        inc rbx
        dec rdx
        jmp .loop

    .done:
        mov rax, rdi
        leave
        ret