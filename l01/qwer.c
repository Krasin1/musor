//(b*c-8/a)/(31+b-1)
#include <stdio.h>

unsigned short chis_u_sh, znam_u_sh, res_u_sh;
short chis_sh, znam_sh, res_sh;
unsigned char chis_u_ch, znam_u_ch, res_u_ch;
char chis_ch, znam_ch, res_ch;

extern void F_asm_u_short(unsigned short a, unsigned short b, unsigned short c);
extern void F_asm_short(signed short a, signed short b, signed short c);
extern void F_asm_u_char(unsigned char a, unsigned char b, unsigned char c);
extern void F_asm_char(signed char a, signed char b, signed char c);

void vvod_u_short(unsigned short * a, unsigned short * b, unsigned short * c) {
    puts("Введите a, b, c");
    puts("Диапозон данных : 0 до 65,535");
    scanf("%hu", a);
    scanf("%hu", b);
    scanf("%hu", c);
}

void u_short() {
    unsigned short a, b, c;
    puts("unsigned short int");
    vvod_u_short(&a, &b, &c);
    unsigned short ch =(b*c-8/a), zn =  (31 + b - 1);
    printf("Числитель = %hu\n", ch); 
    printf("Знаменатель = %hu\n", zn);
    printf("Результат = %hu\n", (unsigned short)(ch / zn));
}

void asm_u_short() {
    unsigned short a, b, c;
    puts("unsigned short int");
    vvod_u_short(&a, &b, &c);
    F_asm_u_short(a, b, c);
    printf("Числитель = %hu\n", chis_u_sh); 
    printf("Знаменатель = %hu\n", znam_u_sh);
    printf("Результат = %hu\n", res_u_sh);
}

void vvod_short(short * a, short * b, short * c) {
    puts("Введите a, b, c");
    puts("Диапозон данных : -32,768 до 32,767");
    scanf("%hi", a);
    scanf("%hi", b);
    scanf("%hi", c);
}

void shortt() {
    short a, b, c;
    puts("signed short int");
    vvod_short(&a, &b, &c);
    signed short ch =(b*c-8/a), zn =  (31 + b - 1);
    printf("Числитель = %hi\n", ch); 
    printf("Знаменатель = %hi\n", zn);
    printf("Результат = %hi\n", (signed short)(ch / zn));

}

void asm_short() {
    short a, b, c;
    puts("signed short int");
    vvod_short(&a, &b, &c);
    F_asm_short(a, b, c);
    printf("Числитель = %hi\n", chis_sh); 
    printf("Знаменатель = %hi\n", znam_sh);
    printf("Результат = %hi\n", res_sh);

}

void vvod_char(signed char * a, signed char * b, signed char * c) {
    puts("Введите a, b, c");
    puts("Диапозон данных : -128 до 127");
    scanf("%hhi %hhi %hhi", a, b, c);
}

void charr() {
    signed char a, b, c;
    puts("signed char");
    vvod_char(&a, &b, &c);
    signed char ch =(b * c - 8 / a), zn =  (31 + b - 1);
    printf("Числитель = %hhi\n", ch); 
    printf("Знаменатель = %hhi\n", zn);
    printf("Результат = %hhi\n", (signed char)(ch / zn));

}

void asm_char() {
    signed char a, b, c;
    puts("signed char");
    vvod_char(&a, &b, &c);
    F_asm_char(a, b, c);
    printf("Числитель = %hhi\n", chis_ch); 
    printf("Знаменатель = %hhi\n", znam_ch);
    printf("Результат = %hhi\n", res_ch);

}

void vvod_u_char(unsigned char * a, unsigned char * b, unsigned char * c) {
    puts("Введите a, b, c");
    puts("Диапозон данных : 0 до 255");
    scanf("%hhu %hhu %hhu", a, b, c);
}

void u_char() {
    unsigned char a, b, c;
    puts("unsigned char");
    vvod_u_char(&a, &b, &c);
    unsigned char ch =(b * c - 8 / a), zn =  (31 + b - 1);
    printf("Числитель = %hhu\n", ch); 
    printf("Знаменатель = %hhu\n", zn);
    printf("Результат = %hhu\n", (unsigned char)(ch / zn));

}

void asm_u_char() {
    unsigned char a, b, c;
    puts("unsigned char");
    vvod_u_char(&a, &b, &c);
    F_asm_u_char(a, b, c);
    printf("Числитель = %hhu\n", chis_u_ch); 
    printf("Знаменатель = %hhu\n", znam_u_ch);
    printf("Результат = %hhu\n", res_u_ch);

}

void choose_c_func(int a){
    if (a == 1) { u_short(); }
    else if (a == 2) { shortt(); }
    else if (a == 3) { u_char(); }
    else if (a == 4) { charr(); }

    else { puts("Error!"); }
}

void choose_asm_func(int a) {
    if (a == 1) { asm_u_short(); }
    else if (a == 2) { asm_short(); }
    else if (a == 3) { asm_u_char(); }
    else if (a == 4) { asm_char(); }
    
    else { puts("Error!"); }
}

void choose_lang(int a, int b) {
    if (a == 1) { choose_c_func(b); }
    else if (a == 2) { choose_asm_func(b); }
    else { puts("Error!"); }
}

int main() {
    int a, b;
    puts("Исходное уравнение : (b * c - 8 / a) / (31 + b - 1)");
    puts("Выберите язык (1 - с ; 2 - assembler) :");
    scanf("%d", &a);
    puts("Выберите функцию (1 - unsigned short int ; 2 - signed short int ;\n3 - unsigned char ; 4 - signed char) :");
    scanf("%d", &b);
    choose_lang(a, b);
    return 0;
}
