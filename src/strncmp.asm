; FILE: strncmp.asm
; DESCRIPTION: This file contains the implementation of the strncmp function in assembly language.
; AUTHOR: Simon Ganier-Lombard
; DATE: [feb 2024]

BITS 64
SECTION .text
global strncmp

strncmp:
    enter 0, 0
    mov eax, 0
    mov ebx, 0

    .loop:
        cmp rdx, 0 ; If the number of bytes to compare is 0, return 0
        jz .done
        movzx eax, byte [rdi]
        movzx ebx, byte [rsi]
        cmp al, bl
        jne .done
        test al, al
        jz .equal
        inc rdi
        inc rsi
        dec rdx    ; Decrement the number of bytes to compare
        jmp .loop

    .done:
        sub eax, ebx    ; Calculate the difference between the bytes
        mov ebx, 0
        leave           ; clean the stack frame
        ret
    .equal:
        xor eax, eax
        mov ebx, 0
        leave
        ret