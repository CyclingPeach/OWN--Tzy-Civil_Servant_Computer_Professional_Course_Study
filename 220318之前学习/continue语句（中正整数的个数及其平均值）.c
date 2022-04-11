#include <stdio.h>

void main(){
	int i,x,num=0;
	double sum=0,ave;
	printf("Please enter 5 integers.\n");
	for(i=0;i<5;i++){
		scanf("%d",&x);		// 输入一个整数
		if(x<=0)
			continue;	// 如果不是正整数则输入下一个数 
		num++;		// 正整数个数 
		sum=sum+x; 	// 正整数的和 
	}
	ave=sum/num;
	printf("%d plus integer`s sum:%.0f\n",num,sum);
	printf("average value:%.2f\n",ave);	
} 
