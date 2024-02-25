; FILE: strcspn.asm
; DESCRIPTION: This file contains the implementation of the strcspn function in assembly language.
; AUTHOR: Simon Ganier-Lombard
; DATE: [feb 2024]

BITS 64
SECTION .text
global strcspn                   ; export strcspn

; strcspn: This function returns the length of the initial segment of the string pointed to by rdi that consists of characters not in the string pointed to by rsi.
; register used : rdi, rsi, rcx, rdx, rax (al), rbx (bl)
strcspn:
    enter 0, 0
    mov rcx, 0
    mov rdx, 0

    .rdi_loop:
        mov al, [rdi]
        cmp al, 0
        je .end

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
        inc rdx
        jmp .rdi_loop

    .match:
        jmp .end

    .end:
        mov rax, rdx
        leave
        ret
