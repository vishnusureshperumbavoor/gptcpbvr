#include <stdio.h>
void main(){
    int num1,num2,op;
    printf("enter 2 numbers\n");
    scanf("%d%d",&num1,&num2);
    printf("1.divison\t2.multiplication\t3.addition\t4.subtraction\n");
    scanf("%d",&op);
    switch(op){
        case 1:
                printf("%d / %d = %d\n",num1,num2,num1/num2);
                break;
        case 2:
                printf("%d * %d = %d\n",num1,num2,num1*num2);
                break;
        case 3:
                printf("%d + %d = %d\n",num1,num2,num1+num2);
                break;
        case 4:
                printf("%d - %d = %d\n",num1,num2,num1-num2);
                break;
        default:
                printf("enter valid number\n");
                break;
    }
}