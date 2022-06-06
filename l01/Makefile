all: as.o qwer.o
	gcc as.o qwer.o -fno-pie -no-pie -o qwer

as.o: as.asm
	yasm -f elf64 as.asm -o as.o

qwer.o: qwer.c
	gcc -c qwer.c -o qwer.o

clean:
	rm *.o && rm qwer

