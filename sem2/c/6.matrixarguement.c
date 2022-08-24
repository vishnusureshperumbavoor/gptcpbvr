// printing matrix using pointer
#include <stdio.h>
void display(int *arr,int row,int col){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            printf("%d\t",*((arr+i*col)+j));
        printf("\n");
    }
}
void print(int arr[][10],int row,int col){
    int i,j;
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            printf("%d\t",arr[i][j]);
        printf("\n");
    }
}
void main(){
    int i,j,arr[2][3];
    printf("enter 2*3 numbers\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++)
            scanf("%d",&arr[i][j]);
    }
    display(*arr,2,3);
    print(arr,2,3);
}