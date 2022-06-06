//(2*a/b - 1)/(a-28+c)

#include <stdio.h>

extern void func_ass();

unsigned short int a, b, c;
unsigned long res, sp, zn;

void F_CSignedINT() {

    res = (2 * a / b - 1)/(a - 28 + c);
    sp = (2 * a / b - 1);
    zn = (a - 28 + c);
    printf("ЧИСЛИТЕЛЬ СПЕРМЫ: %li\n", sp);
    printf("Знаменатель говна: %li\n", zn); 
    printf("Сишный сигновый прикол  %li\n", res);

}

void F_ASMSI() {

    func_ass();
    printf("ЧИСЛИТЕЛЬ СПЕРМЫ: %li\n", sp);
    printf("Знаменатель говна: %li\n", zn);
    printf("ASM сигновый прикол  %li\n", res);

}

int main() {
    puts("Введите a, b, c:");
    scanf("%hu %hu %hu", &a, &b, &c);
    F_CSignedINT();
    F_ASMSI();
    return 0;
}



