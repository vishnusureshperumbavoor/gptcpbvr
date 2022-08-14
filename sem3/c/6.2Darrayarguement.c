// printing 2 dimensional array using pointer
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
    int i,j,arr[2][3],row=2,col=3;
    printf("enter %d numbers\n",row*col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++)
            scanf("%d",&arr[i][j]);
    }
    display(*arr,row,col);
    print(arr,row,col);
}