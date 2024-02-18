; FILE: strlen.asm
; DESCRIPTION: This file contains the implementation of the strlen function in assembly language.
; AUTHOR: Simon Ganier-Lombard
; DATE: [feb 2024]


global strlen                   ; export main

strlen:

	;reserving space for our variables on the stack
	;rax is used to store the counter and for the return value
	;rdi is used for the fisrt argument we send to the function
	enter 0, 0                  ; Prologue
	mov rax, 0                  ; Initialize the counter to zero

.loop:							; <-------------------------------------------------------loop-------------------------------------------------<|
	test rdi, rdi               ; Check if rdi is null																							|
	jz .done                    ; Jump to .done if rdi is null cf flags bootstrrap) => ZF rezo result is null >--------->>>-------->|		    |
	cmp BYTE [rdi + rax], 0  	; is like str++ (fisrt character adress of the string plus the counter) in c to the byte 0 so "\0"	|			|
	je .done					; Jump to done if the comparaison cmp BYTE of the string end with  0 >-------------->>>> -----------|---->|	    |
	inc rax						; otherwise we increment rax (the register using to return value)	  								|	  |		|
	jmp .loop					; return at the start of the loop >------------------------------>>>--------------------------------|-----|---->|
								;																									|	  |
.done:							;   <------------------------------------------<<<--------------------------------------------------|<---<|
	leave                       ; Epilogue
	ret                         ; Return
