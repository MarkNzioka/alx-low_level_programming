section .data
	hello db "Hello, Holberton", 0
	format db "%s", 10, 0
section .text
	global main
	extern printf
main:
	sub rsp, 8	;Align the stack
	mov rdi, format	;Load the format string
	mov rsi, hello	;Load the address of the string
	call printf	;Call printf function
	add rsp, 8	;Restore the stack

	mov rax, 60	;Exit syscall number
	xor rdi, rdi	;Exit status 0
	syscall
section .bss
