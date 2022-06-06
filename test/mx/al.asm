section .data
	extern a, b, c
	global res dw 1

section .text
	global nuts
		nuts:	
		mov ax, [a]
		mov bx, [b]
		imul bx
		idiv 5
		mov [res], ah
		ret
