#include <stdio.h>

void main(){
	int i,x,num=0;
	double sum=0,ave;
	printf("Please enter 5 integers.\n");
	for(i=0;i<5;i++){
		scanf("%d",&x);		// ����һ������
		if(x<=0)
			continue;	// ���������������������һ���� 
		num++;		// ���������� 
		sum=sum+x; 	// �������ĺ� 
	}
	ave=sum/num;
	printf("%d plus integer`s sum:%.0f\n",num,sum);
	printf("average value:%.2f\n",ave);	
} 
