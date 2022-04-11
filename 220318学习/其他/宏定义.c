#include <stdio.h>
#include "宏定义-宏.h"
/*
或者：include </home/tzy/文档/Project/省考公务员专业课学习/220318学习/宏定义-宏.h>
*/

void main(){
    extern int age;
    int a,b;
    a = NUM;
    b = AHPU;
    printf("%d,%d\n",a,b);
    printf("%d\n",age);     // 外部变量说明
}