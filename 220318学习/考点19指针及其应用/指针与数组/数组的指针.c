#include <stdio.h>

void main(){
    int a[5];
    for(int i=0;i<5;i++){
        *(a+i)=i*2;     
        // 这里的a是数组的指针，也即数组的起始地址。
        // 搞清楚*(a+i)是这个地址的值，令这个值=i*2
        // 千万不能写成了(a+i)=i*2，这样就变成了'地址=值'这样的格式了，完全错了。
    }
    for(int i=0;i<5;i++)
        printf("%d\n",a[i]);
}