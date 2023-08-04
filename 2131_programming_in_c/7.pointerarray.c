#include <stdio.h>
void main(){
    int arr1[4],*arr2[4],i;
    printf("enter 4 numbers\n");
    for(i=0;i<4;i++){
        scanf("%d",&arr1[i]);
        arr2[i] = &arr1[i];
    }
    for(i=0;i<4;i++){
        printf("%d\t",*(arr2[i]));
    }
}
// like integer, float array there is pointer array