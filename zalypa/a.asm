; (a-b)/b , если a > b
; a/b+5 , если a < b
; 256 , a = b

section .data
    extern res_short, res_ushort

section .text
    global asm_short
    global asm_ushort

asm_short:
    push rbp
    mov rbp, rsp

    mov eax, edi
    mov ebx, esi
    cmp eax, ebx
    jge Bol

    cdq
    idiv ebx
    add rax, 5
    mov [res_short], rax
    
    mov rsp, rbp
    pop rbp
    ret

    Bol:
    cmp eax, ebx
    je Ravno

    sub eax, ebx
    cdq
    idiv ebx
    mov [res_short], rax
    
    mov rsp, rbp
    pop rbp
    ret

    Ravno:
    mov eax, 256
    mov [res_short], eax

    mov rsp, rbp
    pop rbp
    ret

asm_ushort:
    push rbp
    mov rbp, rsp

    mov eax, edi
    mov ebx, esi
    cmp eax, ebx
    jg _Bol
    je _Ravno

    ; cdq
    xor edx, edx
    div ebx
    add eax, 5
    ; mov [res_short], ax
    
    ushort_end:
    mov rsp, rbp
    pop rbp
    ret

    _Bol:

    sub eax, ebx
    ; cdq
    xor edx, edx
    div ebx
    ; mov [res_short], ax
    
    jmp ushort_end

    _Ravno:
    mov eax, 256
    ; mov [res_ushort], ax

    jmp ushort_end
