#include <stdio.h>
#include "宏定义-宏.h"

void main(){
    extern int age;     // 外部变量说明
    extern int height;
    printf("%d,%d\n",age,height);
}