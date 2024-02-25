; FILE: index.asm
; DESCRIPTION: This file contains the implementation of the index function in assembly language.
; AUTHOR: Simon Ganier-Lombard
; DATE: [feb 2024]

BITS 64
SECTION .text
global index
index:
    enter 0, 0
    mov rax, 0
    .loop:
        mov al, [rdi]
        cmp BYTE al, sil
        je .done
        test al, al
        jz .return_null
        cmp BYTE al, 0
        je .done
        inc rdi
        jmp .loop
    .done:
        mov rax, rdi
        leave
        ret
    .return_null:
        mov rax, 0
        leave
        ret
