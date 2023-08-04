#include <stdio.h>
int factorial(int num){
    int i;
    for(i=1;num>=1;num--)
        i*=num;
    return i;
}
void main(){
    int num;
    printf("enter a number\n");
    scanf("%d",&num);
    printf("factorial = %d\n",factorial(num));
}