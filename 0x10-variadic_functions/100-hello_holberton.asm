%define sys_write 1
%define stdout 1

%define sys_exit 60
%define success 0

%define nl 10

section .data

	message db "Hello, Holberton", nl

section .text

global main
main:
	mov rax, 1
	mov rdi, 1
	mov rsi, message
	mov rdx, 17
	syscall
