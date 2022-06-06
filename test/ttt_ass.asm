section .data
    extern abc
section .text
    global bruh

bruh:
    push rbp
    mov rbp, rsp
    
    mov rax, rdi
    mov ebx, esi
    div ebx
    mov [abc], rax
    
    mov rsp, rbp
    pop rbp
    ret
