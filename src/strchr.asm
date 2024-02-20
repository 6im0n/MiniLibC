; FILE: strchr.asm
; DESCRIPTION: This file contains the implementation of the strchr function in assembly language.
; AUTHOR: Simon Ganier-Lombard
; DATE: [feb 2024]

BITS 64
SECTION .text
global strchr                   ; export main

strchr:

	;reserving space for our variables on the stack
	;rax is used to store the counter and for the return value
	;rdi is used for the fisrt argument we send to the function
	enter 0, 0                  ; Prologue
    mov rax, 0                  ; Initialize the retun to zero

.loop:
    mov al, [rdi]           ; store the fisrt char of rdi
    cmp BYTE al, sil        ; cmp is using to compare two value BYTE [rdi] is using to acess one caracter of the FISRT parameter and sil is the 8 bytes value for the second character stored in the RDI register
    je .done                ; go to end
    test al, al             ; Check if the al (the first char of rdi) is null perform a bitwise operation to al and itsefl zero flag (ZF) is set 																							|
	jz .return_null         ; jump to the retun block (that return if the string is null)
    cmp BYTE al, 0          ; check if the string is terminated
    je .done                ; go to end
    inc rdi                 ; increment to the next character in the string (str++)
    jmp .loop               ; continue the loop while 0 or the character is find

.done:
    mov rax, rdi            ; return the rdi register to the rax to return automaticly when use ret
	leave                   ; Epilogue
	ret

.return_null:                 ; Return null
    mov rax, 0                ; set the rax value to zero (NULL)
    leave
    ret