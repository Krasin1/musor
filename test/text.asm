section .data
    text db "Hello, World!", 10
    len equ $-text

section .text
    global _start
    global steck

_start:

    mov rax, 1
    mov rdi, 1
    mov rsi, text
    mov rdx, len
    syscall
    
    steck

    mov rax, 60
    mov rdi, 0
    syscall

steck:
    push rbp
    mov rbp, rsp

    mov rsp, rbp
    pop rbp
    ret
