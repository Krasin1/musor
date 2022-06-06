section .data
    text db "Ziga pidorasa", 10
    len db $-text

section .bss

section .text
    global _start

_start:
    mov rax, 1
    mov rdi, 1
    mov rsi, text
    mov rdx, 5
    syscall
    
    mov rax, 60
    mov rdi, 0
    syscall
