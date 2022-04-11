#include <stdio.h>

void main(){
    int *p,i=1,x,y;
    p=&i;
    x=*p;
    i+=2;
    y=*&i;

    printf("x=%d,y=%d\n",x,y);
}

