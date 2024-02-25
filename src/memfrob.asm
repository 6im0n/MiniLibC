; FILE: memfrob.asm
; DESCRIPTION: This file contains the implementation of the memfrob function in assembly language.
; AUTHOR: Simon Ganier-Lombard
; DATE: [feb 2024]

BITS 64
SECTION .text
global memfrob
memfrob:
    enter 0, 0
    mov rax, 0

    .loop:
        cmp rsi, 0
        je .done
        mov al, [rdi + rbx]
        xor al, 42
        mov [rdi + rbx], al
        inc rbx
        dec rsi
        jmp .loop

    .done:
        mov rax, rdi
        leave
        ret
