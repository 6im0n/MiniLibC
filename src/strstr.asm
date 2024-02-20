; FILE: strstr.asm
; DESCRIPTION: This file contains the implementation of the strstr function in assembly language.
; AUTHOR: Simon Ganier-Lombard
; DATE: [feb 2024]

BITS 64
SECTION .text
global strstr

strstr:
    enter 0, 0
    mov rcx, 0
    mov rdx, 0
    mov rcx, 0
    push rcx
    mov al, [rdi]
    mov bl, [rsi]
    cmp bl, 0
    jz .end_find_str
    cmp al, 0
    jz .end_null

    .main_loop:
        mov al, [rdi + rcx]
        mov bl, [rsi + rdx]
        cmp al, 0
        je .end_null
        cmp bl, 0
        je .end_find_str
        cmp al, bl
        je .next
        inc rcx
        jmp .main_loop

    .next:
       push rcx
        .sub_loop:
            mov al, [rdi + rcx]
            mov bl, [rsi + rdx]
            cmp bl, 0
            je .end_find_str
            cmp al, bl
            jne .reset_loop
            inc rcx
            inc rdx
            jmp .sub_loop

    .reset_loop:
        pop rcx
        inc rcx
        mov rdx, 0
        jmp .main_loop

    .end_find_str:
        pop rcx
        add rdi, rcx
        mov rax, rdi
        leave
        ret
    
    .end_null:
        mov rax, 0
        leave
        ret
