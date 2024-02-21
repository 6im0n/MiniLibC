; FILE: strpbrk.asm
; DESCRIPTION: This file contains the implementation of the strpbrk function in assembly language.
; AUTHOR: Simon Ganier-Lombard
; DATE: [feb 2024]

BITS 64
SECTION .text
global strpbrk                   ; export strpbrk

strpbrk:
    enter 0, 0
    mov rcx, 0

    .rdi_loop:
        mov al, [rdi]
        cmp al, 0
        je .return_null

    .rsi_loop:
        mov bl, [rsi + rcx]
        cmp bl, 0
        je .no_match
        cmp al, bl
        je .match
        inc rcx
        jmp .rsi_loop

    .no_match:
        mov rcx, 0
        inc rdi
        jmp .rdi_loop

    .match:
        jmp .return_pointer

    .return_null:
        mov rax, 0
        jmp .end

    .return_pointer:
        mov rax, rdi

    .end:
        leave
        ret
