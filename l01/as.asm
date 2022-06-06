;(b*c-8/a)/(31+b-1)
section .data
    extern chis_u_sh, znam_u_sh, res_u_sh
    extern chis_sh, znam_sh, res_sh 
    extern chis_u_ch, znam_u_ch, res_u_ch
    extern chis_ch, znam_ch, res_ch


section .text
    global F_asm_u_short
    global F_asm_short
    global F_asm_u_char
    global F_asm_char 

F_asm_u_short:
    push rbp
    mov rbp, rsp

    ;числитель
    mov rax, rsi
    mul rdx
    mov rbx, rax
    mov rax, 8
    div rdi
    sub rbx, rax
    mov [chis_u_sh], rbx
    ;знаменатель
    mov rax, rsi
    add rax, 31
    sub rax, 1
    mov [znam_u_sh], rax
    ;результат
    mov rax, [chis_u_sh]
    mov rbx, [znam_u_sh]
    cqo
    div rbx    
    mov [res_u_sh], rax

    mov rsp, rbp
    pop rbp
    ret
    
F_asm_short:
    push rbp
    mov rbp, rsp
    
    ;числитель
    mov eax, esi
    imul edx
    mov ebx, eax
    mov eax, 8 
    cdq
    idiv edi
    sub ebx, eax
    mov [chis_sh], ebx
    ;знаменатель
    mov eax, esi
    add eax, 31
    sub eax, 1 
    mov [znam_sh], eax
    ;результат
    mov ax, [chis_sh]
    mov bx, [znam_sh]
    cwd
    idiv bx
    mov [res_sh], ax
    
    mov rsp, rbp
    pop rbp
    ret
    

    
F_asm_u_char:
    push rbp
    mov rbp, rsp
    
    ;числитель
    mov rax, rsi
    mul rdx
    mov rbx, rax
    mov rax, 8
    div rdi
    sub rbx, rax
    mov [chis_u_ch], rbx
    ;знаменатель
    mov rax, rsi
    add rax, 31
    sub rax, 1
    mov [znam_u_ch], rax
    ;результат
    mov rax, [chis_u_ch]
    mov rbx, [znam_u_ch]
    cqo
    div rbx    
    mov [res_u_ch], rax

    mov rsp, rbp
    pop rbp
    ret
    


F_asm_char:
    push rbp
    mov rbp, rsp
    
    ;числитель
    mov eax, esi
    imul edx
    mov ebx, eax
    mov eax, 8 
    cdq
    idiv edi
    sub ebx, eax
    mov [chis_ch], ebx
    ;знаменатель
    mov eax, esi
    add eax, 31
    sub eax, 1 
    mov [znam_ch], eax
    ;результат
    mov al, [chis_ch]
    mov bl, [znam_ch]
    cbw
    idiv bl
    mov [res_ch], ax
    


    mov rsp, rbp
    pop rbp
    ret
    

