; FILE: strcasecmp.asm
; DESCRIPTION: This file contains the implementation of the strcasecmp function in assembly language.
; AUTHOR: Simon Ganier-Lombard
; DATE: [feb 2024]

BITS 64
SECTION .text
global strcasecmp
global tolower

strcasecmp:
    enter 0x00, 0x00
    mov eax, 0x00
    mov ebx, 0x00

    .loop:
        movzx eax, byte [rdi] ; The `movzx` instruction in assembly language moves a smaller size operand into a larger size destination and zero-extending it. // than mov bl, [rsi]` / mov al [rdi], it only affects the lower byte of the `ebx` register, leaving the upper bytes unchanged. This could lead to incorrect results if the upper bytes contain non-zero values from previous operations.
        movzx ebx, byte [rsi] ; On the other hand, `movzx ebx, byte [rsi]` moves the byte at the memory location pointed to by `rsi` into the `bl` register, and also clears the upper bytes of `ebx`, ensuring that the entire `ebx` register contains the correct value.
        mov dl, al
        call tolower
        mov al, dl
        mov dl, bl
        call tolower
        mov bl, dl
        cmp al, bl
        jne .done
        test al, al
        jz .equal
        inc rdi
        inc rsi
        jmp .loop

    .done:
        sub eax, ebx
        mov ebx, 0x00
        leave           ; clean the stack frame
        ret
    .equal:
        xor eax, eax
        mov ebx, 0x00
        leave
        ret

tolower:
    cmp dl, 'A'            ; Compare with 'A'
    jl tolower_done        ; If less than 'A', it's not an uppercase letter
    cmp dl, 'Z'            ; Compare with 'Z'
    jg tolower_done        ; If greater than 'Z', it's not an uppercase letter
    sub dl, 'A' - 'a'     ; Convert uppercase to lowercase (ASCII only)
    jnz tolower_done      ; If not zero (already lowercase), skip conversion
    add dl, 'a'            ; Convert to lowercase

    tolower_done:
    ret
