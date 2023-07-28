global main


section .data
msg: db "hello, holberton", 10
msglen: equ $ - msg

section .text
extern printf

main:

mov rax, 1
mov rdi, 1
mov rsi, msg
mov rdx, msglen
syscall

mov rax, 60
mov rdi, 0
syscall

