#include <stdio.h> 
void main(){
	int x,y;
	printf("Please intput x and y value!\n");
	scanf("%d%d",&x,&y);	// �����ٷֺ��м䲻�ܿո���߶��ţ���������߼����ܻ���� 
	if(x < y){
		printf("x��ֵ��y��ֵС");
	} else if(x == y){
		printf("x��ֵ����y��ֵ"); 
	} else
		printf("x��ֵ��y��ֵ��");
}
