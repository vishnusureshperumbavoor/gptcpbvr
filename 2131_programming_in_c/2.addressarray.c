#include <stdio.h>
void main(){
    int arr[]={24,34,12,44,56,17},i,*ptr;
    printf("enter 3 numbers\n");
    for(i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    ptr = arr;
    for(i=0;i<3;i++,ptr++){
        printf("%u\t",ptr);
    }
}