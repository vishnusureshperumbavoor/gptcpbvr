#include <stdio.h>
void main(){
    int i,j,arr[10][10];
    printf("enter 2*3 matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++)
            scanf("%d",&arr[i][j]);
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++)
            printf("%d\t",*(arr[i]+j));
        printf("\n");
    }
    for(i=0;i<2;i++){
        for(j=0;j<3;j++)
            printf("%d\t",*(*(arr+i)+j));
        printf("\n");
    }
}