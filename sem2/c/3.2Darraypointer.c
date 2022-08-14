#include <stdio.h>
void main(){
    int a[2][3],*p,i,j,row=2,col=3;
    printf("enter 6 numbers\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            scanf("%d",&a[i][j]);
    }
    p=&a[0][0];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            printf("%d\t",*((p+i*col)+j));
        printf("\n");
    }
}
// problem of this method is to declare the exact array size
