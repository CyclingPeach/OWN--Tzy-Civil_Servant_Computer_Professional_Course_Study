#include <stdio.h>

void main(){
	char c;
	while(1) {
		c=getchar();	//��ȡһ���ַ�
		if(c>='A'&&c<='Z')
			putchar(c+'a'-'A');		//��д��ĸתΪСд��ĸ
		else
			break; 
	} 
}
