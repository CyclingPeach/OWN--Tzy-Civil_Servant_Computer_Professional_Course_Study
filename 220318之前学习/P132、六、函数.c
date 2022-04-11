#include <stdio.h>

int sum(int n,int j){
    int i,s=0;
    for(i=1;i<=n;i++){
        s=s+i;
    }
    printf("j的值为：%d\n",j);
    
    return s;
}

void main(){
    int a;
    a = sum(100,105);
    printf("%d\n",a);
}