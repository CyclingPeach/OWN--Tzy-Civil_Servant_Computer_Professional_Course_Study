#include <stdio.h>

void main(){
    char str[100],a;
    int i,num=0,word=0;
    printf("Please input a string:\n");
    gets(str);
    for(i=0;(a=str[i])!='\0';i++){
        if(a==' ')
            word=0;
        else if(word==0){
            word=1;
            num++;
        }
    }
    printf("There are %d words.\n",num);
}