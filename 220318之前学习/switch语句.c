#include <stdio.h>

int main(){
	int x;
	scanf("%d",&x);
	
	switch(x/10){
		case 9:printf("优秀");break;
		case 8:printf("良好");break;
		case 7:printf("中等");break;
		case 6:printf("及格");break;
		default:printf("不及格");break;
	}
}
