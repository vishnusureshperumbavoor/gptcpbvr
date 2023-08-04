#include <stdio.h>
void main(){
    int arr[3],i,*ptr;
    printf("enter 3 numbers\n");
    for(i=0;i<3;i++){
        scanf("%d",&arr[i]);
    }
    ptr = arr;
    for(i=0;i<3;i++){
        printf("%d\t",*(ptr+i));
    }
    printf("\n");
    for(i=0;i<3;i++,ptr++){
        printf("%d\t",*ptr);
    }
}