// 函数返回地址值
#include <stdio.h>

int *max(int *x,int *y){
    if(*x<*y)       // 注意这里是*x而不是x，因为我们是要判断两个值的大小，而不是两个值的地址大小。
        return y;
    else            // else可以省略，然后将return x向前移动一个tab
        return x;
}

void main(){
    int a,b,*c;
    printf("请输入：");
    scanf("%d%d",&a,&b);
    c=max(&a,&b);
    printf("值为：%d\n",*c);
}