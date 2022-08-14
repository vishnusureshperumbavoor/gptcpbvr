#include <stdio.h>
void main(){
    int arr[]={24,34,12,44,56,17},i,*p,lim;
    printf("enter the limit of the array\n");
    scanf("%d",&lim);
    printf("enter %d numbers\n",lim);
    for(i=0;i<lim;i++)
        scanf("%d",&arr[i]);
    p = arr;
    printf("element arrays\n");
    for(i=0;i<lim;i++)
        printf("%d\t",*(p+i));
    printf("\n");
    for(i=0;i<lim;i++,p++)
        printf("%d\t",*p);
    printf("\naddress array\n");
    for(i=0;i<lim;i++,p++)
        printf("%u\t",p);
}
// array of elements and addresses