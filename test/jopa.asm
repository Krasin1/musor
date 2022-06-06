;(b*c-8/a)/(31+b-1)

section .data
    extern a, b, c, res, ch, zn

section .text
    global piska

piska:
    mov ax, 8 
    mov bl, [a]
    div bl
    xor cx, cx
    mov cx, [b] 
    mul cx, [c]
    xchg cx, ax
    sub ax, cx
    mov [ch], ax

    xor cx, cx 
    mov cx, [b]
    add cx, 31
    dec cx
    mov [zn], cx

    cwd
    div cx
    mov [res], ax
    ret
