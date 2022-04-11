#include <stdio.h>

void main(){
    int arr[3][4],i,j;
    printf("Please enter data:\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Output a 2-dimension array:\n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%4d",arr[i][j]);
        }
        printf("\n");
        printf("\n");
    }
}