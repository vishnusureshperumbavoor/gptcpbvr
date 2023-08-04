// printing 0 to any number according to row and columns
#include <stdio.h>
void main(){
    int i,j,row,col;
    printf("enter number of rows and columns\n");
    scanf("%d%d",&row,&col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            printf("%d\t",(i*col)+j);
        printf("\n");
    }
}