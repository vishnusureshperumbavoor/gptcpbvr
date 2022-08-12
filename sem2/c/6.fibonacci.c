// 0,1,1,2,3,5,8,13,21,34,55
// each number is the sum of 2 preceding ones. usually starts from 0 and 1
#include <stdio.h>
int main(){
    int num1=0,num2=1,limit,num3,i;
    printf("enter the limit of fibonacci numbers\n");
    scanf("%d",&limit);
    printf("%d\t%d\t",num1,num2);
    for(i=2;i<limit;i++){
       num3=num1+num2; 
       printf("%d\t",num3);
       num1=num2;
       num2=num3;
    }
}