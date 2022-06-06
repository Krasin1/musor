all:
	gcc -Wall -c zad.c
	nasm -felf64 -o ass.o ass.asm
	gcc -o lr01 zad.o ass.o -fno-pie -no-pie
