#include <stdio.h>
#include <stdlib.h>

short res_short;
// unsigned short res_ushort;

extern void asm_short(short a, short b);
extern unsigned short asm_ushort(unsigned short a, unsigned short b);

void f_short() {
    short a, b;
    puts("      short      ");
    puts("Диапозон данных : -32,767 до 32,767");
    puts("Введите a, b");
    scanf("%hd", &a);
    scanf("%hd", &b);
    asm_short(a, b);
    printf("Результат = %hd\n", res_short);
}

void f_ushort() {
    unsigned short a, b;
    puts("      unsigned short      ");
    puts("Диапозон данных : 0 до 65,535");

    puts("Введите a, b");
    scanf("%hu", &a);
    scanf("%hu", &b);

    printf("Результат = %hu\n", asm_ushort(a, b));
}

int main() {
    short a;
    puts("Выберите тип данных(1 - short ; 2 - unsigned short)");
    if (1 != scanf("%hd", &a)) {
        puts("Error!");
    }
    if (a == 1) {
        f_short();
    } else if (a == 2) {
        f_ushort();
    } else {
        puts("Нет такого выбора");
    }
    return 0;
}
