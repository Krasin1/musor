#include<stdio.h>

short abc;
extern void bruh(short a, short b);
int main() {
    bruh(7, 33);
    printf("%hu", abc);
    return 0;
}
