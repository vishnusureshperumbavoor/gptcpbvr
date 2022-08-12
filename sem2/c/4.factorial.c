#include <stdio.h>
int factorial(int num){
    if(num==1)
        return 1;
    else 
        return num*factorial(num-1);
}
void main(){
    int num,fact=1;
    // while loop
    printf("enter a number\n");
    scanf("%d",&num);
    while(num>=1){
        fact*=num;
        num--;
    }
    printf("factorial = %d\n",fact);

    // forloop
    printf("enter a number\n");
    scanf("%d",&num);
    for(fact=1;num>=1;num--)
        fact*=num;
    printf("factorial = %d\n",fact);

    // recursive 
    printf("enter a number\n");
    scanf("%d",&num);
    printf("factorial = %d",factorial(num));
}