#include <stdio.h>
#include <stdlib.h>

extern int res;
extern void nuts();

int a,b,c;

int main()
{
    puts("vvedi 3 chisla:");
    scanf("%i%i%i",&a,&b,&c);
    nuts();
    printf("(a*b+1)/c)=%i\n",res);
    return 0;
}
