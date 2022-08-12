#include <stdio.h>
void main(){
    int arr[10],lim,i,sum=0;
    printf("enter the limit of the array\n");
    scanf("%d",&lim);
    printf("enter %d numbers\n",lim);
    for(i=0;i<lim;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<lim;i++)
        printf("%d\t",arr[i]);
    printf("\n");
    for(i=0;i<lim;i++){
        if(arr[i]%2==0)
            sum+=arr[i];
    }
    printf("sum of integers = %d\n",sum);
}