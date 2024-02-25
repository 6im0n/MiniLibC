; FILE: rindex.asm
; DESCRIPTION: This file contains the implementation of the rindex function in assembly language.
; AUTHOR: Simon Ganier-Lombard
; DATE: [feb 2024]
BITS 64
SECTION .text
global rindex
rindex:
	enter 0, 0
    mov rax, 0
    .loop_end_string:
        mov al, [rdi]
        test al, al
        jz .loop
        cmp BYTE al, 0
        je .loop
        inc rdi
        jmp .loop_end_string
    .loop:
        cmp BYTE sil, 0
        je .done
        dec rdi
        mov al, [rdi]
        cmp BYTE al, sil
        je .done
        test al, al
        jz .return_null
        cmp BYTE al, 0
        je .done
        jmp .loop
    .done:
        mov rax, rdi
        leave
        ret
    .return_null:
        mov rax, 0
        leave
        ret
