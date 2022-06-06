all:
	gcc -g -ggdb -c -o cl.o cl.c
	nasm -g -f elf64 al.asm -l al.lst -F dwarf
	gcc -o l cl.o al.o -fno-pie -no-pie
