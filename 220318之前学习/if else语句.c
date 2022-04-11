#include <stdio.h> 
void main(){
	int x,y;
	printf("Please intput x and y value!\n");
	scanf("%d%d",&x,&y);	// 两个百分号中间不能空格或者逗号，否则程序逻辑可能会混乱 
	if(x < y){
		printf("x的值比y的值小");
	} else if(x == y){
		printf("x的值等于y的值"); 
	} else
		printf("x的值比y的值大");
}
