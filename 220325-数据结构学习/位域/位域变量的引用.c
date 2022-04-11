#include <stdio.h>

sturct bs {
    unsigned int a:1;
    unsigned int b:3;
    unsigned int c:4;
}bit,*pbit;

void main() {
    bit.a = 1;
    bit.b = 7;
    bit.c = 15;
    printf("%d,%d,%d\n",bit.a,bit.b,bit.c);

    pbit = &bit;
    pbit->a = 0;
    pbit->b&= 3;
    pbit->c|= 1;
    printf("%d,%d,%d",pbit->a,pbit->b,pbit->c);
}