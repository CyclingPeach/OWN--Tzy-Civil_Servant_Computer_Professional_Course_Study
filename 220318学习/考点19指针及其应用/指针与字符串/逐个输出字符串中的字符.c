#include <stdio.h>

void main(){
    char *ps="Hello world!";
    for(;*ps!='\0',ps++)
        printf("%c\n",*ps);
}