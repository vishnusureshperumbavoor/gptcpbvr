// printing 2 dimensional array using pointer
#include <stdio.h>
void main(){
    int i,j,row,col,arr[10][10];
    printf("enter number of rows and columns\n");
    scanf("%d%d",&row,&col);
    printf("enter %d numbers\n",row*col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            scanf("%d",&arr[i][j]);
    }
    printf("using arr[i][j]\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            printf("%d\t",arr[i][j]);
        printf("\n");
    }
    printf("using *(arr[i]+j)\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            printf("%d\t",*(arr[i]+j));
        printf("\n");
    }
    printf("using *(*(arr+i)+j)\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            printf("%d\t",*(*(arr+i)+j));
        printf("\n");
    }
}