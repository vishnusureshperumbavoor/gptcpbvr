#include <stdio.h>
void main(){
    int a[2][3],*p,i,j;
    printf("enter 2*3 matrix\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    p=&a[0][0];
    for(i=0;i<2;i++){
        for(j=0;j<3;j++)
            printf("%d\t",*((p+i*3)+j));
        printf("\n");
    }
}
// problem of this method is to declare the exact array size
