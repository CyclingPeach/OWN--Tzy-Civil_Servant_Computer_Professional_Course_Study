// 形参为指针变量时，实参和形参之间的数据传递
#include <stdio.h>

int myadd(int *x,int *y){
    int sum;
    sum=*x+*y;  // 取x和y指针所指向的内存单元中的内容，相加后存入变量sum中
    return sum;
}

void main(){
    int a,b,c;
    printf("请输入a、b的值: ");
    scanf("%d%d",&a,&b);
    c=myadd(&a,&b);
    printf("两数之后为：%d\n",c);
}