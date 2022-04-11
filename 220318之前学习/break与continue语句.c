#include <stdio.h>

void main(){
	char c;
	while(1) {
		c=getchar();	//读取一个字符
		if(c>='A'&&c<='Z')
			putchar(c+'a'-'A');		//大写字母转为小写字母
		else
			break; 
	} 
}
