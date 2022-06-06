;(2*a/b-1)/(a-28+c)

section .data
    extern a, b, c, sp, zn
    extern res

section .text
    global func_ass

func_ass:
    mov al, [a]
    mov bl, [b]
    cbw 
    div bl
    imul ax, 2
    dec ax
    xor cx, cx
    add cx, [a]
    sub cx, 28
    add cx, [c]
    mov [zn], cx
    cwd
    div cx
    mov [res], rax
    ret
