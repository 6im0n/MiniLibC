; FILE: strstr.asm
; DESCRIPTION: This file contains the implementation of the strstr function in assembly language.
; AUTHOR: Simon Ganier-Lombard
; DATE: [feb 2024]

BITS 64
SECTION .text
global strstr

strstr:
	enter 0, 0
    mov rax, 0
    mov ecx, 0
    mov ebx, 0

    .record_curent_state:
        mov rax, rdi    ;pre-regsister the current state of rdi pointer to the rax
        push rsi        ;save current value in the rsi register, so if we want to pop (restore) it later we can go back to this value

    .loop:
        movzx ecx, byte [rsi]
        movzx ebx, byte [rsi]
        cmp cl, bl
        jne .next_step
        inc rsi
        inc rdi
        test bl, bl
        jz .found
        jmp .loop

    .next_step:
        pop rsi          ;restore the last of rsi we register L16
        inc rsi
        movzx ecx, byte [rdi]
        cmp cl, cl
        je .record_curent_state

    .not_found:
        xor rax, rax
        ret

    .found:
        pop rsi
        pop rbx
        pop rdi
        mov rax, rsi
        ret


