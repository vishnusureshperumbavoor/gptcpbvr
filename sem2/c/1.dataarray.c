#include <stdio.h>
void main(){
    int arr[]={24,34,12,44,56,17},i,*p;
    printf("enter 3 numbers\n");
    for(i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    p = arr;
    for(i=0;i<3;i++){
        printf("%d\t",*(p+i));
    }
    printf("\n");
    for(i=0;i<3;i++,p++){
        printf("%d\t",*p);
    }
}