#include <stdio.h>
#include <string.h>

void fun1(){
    char str[10];
    gets(str);
    printf("%s",&str[10]);
    printf("|");
}

void fun2(){
    char str[]=" Hello world!  ";
    printf("%ld",strlen(str));
}

int main(){
    fun2();
}