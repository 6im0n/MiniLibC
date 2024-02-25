; FILE: memmove.asm
; DESCRIPTION: This file contains the implementation of the memmove function in assembly language.
; AUTHOR: Simon Ganier-Lombard
; DATE: [feb 2024]

BITS 64
SECTION .text
global memmove

memmove:

    enter 0, 0 ; set up the stack frame
    mov rbp, rsp ; set the base pointer to the current stack pointer
    mov rcx, 0 ; set the counter to 0
    mov r8, 0 ; set the register r8 to 0
    sub rsp, rdx ; allocate space on the stack for the buffer
    cmp rdx, 0 ; check is the number of bytes to copy is 0
    je .rax_rdi ; if it is, return

    .loop: ; loop to copy the bytes from the source to the buffer
        mov r8, qword [rsi + rcx] ; load the current byte from the source
        mov byte [rsp + rcx], r8b; store the current byte in the destination buffer
        inc rcx ; increment the counter
        cmp rcx, rdx ; check if we have copied all the bytes
        jne .loop ; if not, continue the loop
        mov rsi, rsp ; set the source pointer to the destination buffer
        mov rcx, 0 ; reset the counter
        mov rax, rdi ; set the return value to the destination pointer

    .buffer_loop: ; loop to copy the bytes from the buffer to the destination
        cmp rcx, rdx ; check if we have copied all the bytes
        je .return_value ; if we have, return
        mov r8b, byte [rsi + rcx] ; load the current byte from the buffer
        mov byte [rax + rcx], r8b ; store the current byte in the destination
        inc rcx ; increment the counter
        jmp .buffer_loop ; continue the loop

    .rax_rdi:
        mov rax, rdi ; set the return value to the destination pointer
        leave ; restore the stack pointer
        ret ; return

    .return_value:
        leave ; restore the stack pointer
        ret ; return
