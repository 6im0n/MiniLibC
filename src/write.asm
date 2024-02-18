; FILE: write.asm
; DESCRIPTION: This file contains the implementation of the strlen function in assembly language.
; AUTHOR: Simon Ganier-Lombard
; DATE: [feb 2024]

bits 64                        ; 64-bit mode
section .text                  ; Code section
global hello                    ; export main

hello:

        ;reserving space for our variables on the stack
        enter 0, 0                  ; Stack frame setup // other maner to do
        ; push rbp                     ; Prologue
        ; mov rbp, rsp                 ; Stack frame setup

        ;write
        mov rdi, 1                  ; File descriptor: STDOUT
        mov rax, 1                  ; Add the instruction nuber to the RAX register
        lea rsi, [rel str]           ; Address of the string !!!! WANRING rel is important here because when we create a shared library the address canot be an absolute address but a relative (REL) address
        mov rdx, 14                 ; Length of the string
        syscall                     ; System call: write(1, str, 13)

        ;exit sycall
        mov rax, 60                 ; exit() syscall number
        mov rdi, 0                  ; set the exit status code to 0
        syscall                     ; System call: exit(0)
        leave                       ; Epilogue
        ret                         ; Return

section .rodata                      ; Read-only data
        str: db "Hello, World !", 0   ; null-terminated string
