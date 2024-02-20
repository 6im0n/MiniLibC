; FILE: strcmp.asm
; DESCRIPTION: This file contains the implementation of the strcmp function in assembly language.
; AUTHOR: Simon Ganier-Lombard
; DATE: [feb 2024]

BITS 64
SECTION .text
global strcmp

strcmp:
    enter 0, 0
    mov eax, 0
    mov ebx, 0
    .loop:
        movzx eax, byte [rdi] ; The `movzx` instruction in assembly language moves a smaller size operand into a larger size destination and zero-extending it. // than mov bl, [rsi]` / mov al [rdi], it only affects the lower byte of the `ebx` register, leaving the upper bytes unchanged. This could lead to incorrect results if the upper bytes contain non-zero values from previous operations.
        movzx ebx, byte [rsi] ; On the other hand, `movzx ebx, byte [rsi]` moves the byte at the memory location pointed to by `rsi` into the `bl` register, and also clears the upper bytes of `ebx`, ensuring that the entire `ebx` register contains the correct value.
        cmp al, bl
        jne .done
        test al, al
        jz .equal
        inc rdi
        inc rsi
        jmp .loop

    .done:
        sub eax, ebx
        mov ebx, 0
        leave           ; clean the stack frame
        ret
    .equal:
        xor eax, eax
        mov ebx, 0
        leave
        ret