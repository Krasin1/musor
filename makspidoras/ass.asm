section .bss
    uinput_len  equ      32
    uinput      resb     uinput_len

section .data
    prompt      db      "please input some text: "
    prompt_len  equ     $-prompt
    text        db      10,"You wrote: "
    text_len    equ     $-text

section .text
global _start
_start:
    mov rax, 1
    mov rdi, 1
    mov rsi, prompt
    mov rdx, prompt_len
    syscall

    mov rax, 0
    mov rdi, 0
    mov rsi, uinput
    mov rdx, uinput_len
    syscall
    push rax

    mov rax, 1
    mov rdi, 1
    mov rsi, text
    mov rdx, text_len
    syscall

    pop rdx
    mov rsi, uinput
    mov rdi, 1
    mov rax, 1
    syscall

    xor rdi, rdi
    mov rax, 60
    syscall
