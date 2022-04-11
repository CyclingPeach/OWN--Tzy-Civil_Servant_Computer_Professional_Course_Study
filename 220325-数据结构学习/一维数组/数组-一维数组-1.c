#include <stdio.h>
#include <string.h>

void fun_1(){
    int num[10]={};     // 初始化数组，令所有数组元素的值为零
    int num_1[5]={1,2,3};    // 其余元素默认为零
    num[0]=1;
    printf("%d,%d,%d\n",num[0],num[4],num[9]);
    // 1,0,0
    printf("%d,%d,%d",num_1[0],num_1[2],num_1[3]);
    // 1,3,0
}


/*赋值方法*/
// for循环赋值
void fun_2(){
    int a[10],i;
    for(i=0;i<10;i++){
        a[i]=i+1;
    }
    for(i=0;i<10;i++){
        printf("%d|",a[i]);
    }
}
// memset() 整体赋值（相同值）——只能赋值ch（字符）,不能赋值字符串或者整型
void fun_3(){
    char a[5];
    int b[5],i;
    memset(a,'a',5);
    memset(b,2,5);
    for(i=0;i<5;i++){
        printf("%c|",a[i]);
    }
    printf("\n");
    for(i=0;i<5;i++){
        printf("%d|",b[i]);
    }
}
// memcpy()
void fun_4(){
    int a[4]={1,2,3,4},b[4],i;
    memcpy(b,a,4*sizeof(int));  // 这里的4*sizeof(int)不懂什么意思
    for(i=0;i<4;i++){
        printf("%d|",b[i]);
    }
}


int main(){
    fun_4();
}