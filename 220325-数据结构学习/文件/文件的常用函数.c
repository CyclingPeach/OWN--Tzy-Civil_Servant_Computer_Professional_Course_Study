#include <stdio.h>
#include <stdlib.h>

// fgetc()函数
void fun_fgetc() {
    FILE *fpin;
    char ch;
    if((fpin=fopen("file.txt","r"))==NULL){
        printf("Cannot open this file!\n");
        exit(0);
    }
    ch=fgetc(fpin);
    while(ch!=EOF) {
        putchar(ch);    // putchar()    单个字符输出函数
        ch=fgetc(fpin);
    }
    fclose(fpin);   // 关闭文件
}


// fputc()函数
void fun_fputc() {
    FILE *fpout;
    char ch;
    if((fpout=fopen("file.txt","r"))==NULL)
        exit(0);
    ch=getchar();   // 相当于输入scanf()
    while(ch!='#') {
        fputc(ch,fpout);
        ch=getchar();
    }
    fclose(fpout);
}

int main() {
    // fun_fgetc();
    // fun_fputc();
}