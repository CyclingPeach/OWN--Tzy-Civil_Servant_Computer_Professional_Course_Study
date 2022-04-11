#include <stdio.h>

int min(int a, int b);  // 函数的声明原型

int min(int a, int b){  // 函数定义，带参数有返回值（a和b为形参）
    if(a<b)
        return a;
    else
        return b;
}


/*
返回warning: 
returning ‘int *’ from a function with return type ‘int’ makes 
integer from pointer without a cast
*/
int change(int *a,int *b){  // 这个函数有点问题
    a = 10;
    b = 10;
    return a;
}

void main(){            // 主函数，无返回值（void）
    int x,y,z;
    printf("请输入两个整数：\n");
    scanf("%d%d",&x,&y);
    z = min(x,y);       // 函数调用，x,y为实参12
    printf("这两个数中最小的是%d\n",z);

    /* 
    改变形参的值——通过将实参的地址作为参数传入到函数中，
    这时在改变再改变形参的值，则实参的值也会发生改变
    */

    change(&x,&y);
    printf("x=%d\n",x);
    // printf("x=%d,y=%d\n",x,y);

}