#include <stdio.h>
#include <stdlib.h>

// 读文件测试
void readFile_test() {
    FILE *fp;
    fp=fopen("file.txt","r");
    if(fp==NULL) {
        printf("Cannot open this file!\n");
        exit(-1);
    }
    else
        printf("Can open this file!\n");
}

// 关闭文件
void closeFile() {
    FILE *fp;
    // 打开文件
    fp=fopen("file.txt","r");
    if(fp==NULL) {
        printf("Cannot open this file!\n");
        exit(-1);
    }
    else
        printf("Can open this file!\n");
    // 关闭文件
    if(fclose(fp)==0)
        printf("Close success!!!\n");
    else
        printf("Close fail!!!\n");
}

int main() {
    closeFile();
}