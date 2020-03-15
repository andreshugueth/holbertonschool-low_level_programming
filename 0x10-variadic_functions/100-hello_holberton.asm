global main

section .text

main:
	mov rax, 1
	mov rdi, 1
	mov rsi, text
	mov rdx, mlen
	syscall

	mov rax, 60
	mov rdi, 0
	syscall
	
section .rodata
text:	db "Hello, Holberton", 10
mlen:	equ $ - text
