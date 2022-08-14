// num = 5          factorial = 5*4*3*2*1      ||       1*2*3*4*5
#include <stdio.h>
int factorial(int num){
    if(num==1)
        return 1;
    else 
        return num*factorial(num-1);
}
void main(){
    int num,i=1;
    // while loop
    printf("enter a number\n");
    scanf("%d",&num);
    while(num>=1){
        i*=num;
        num--;
    }
    printf("factorial = %d\n",i);

    // forloop
    int fact=1;
    printf("enter a number\n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        fact*=i;
    printf("factorial = %d\n",i);

    // recursive 
    printf("enter a number\n");
    scanf("%d",&num);
    printf("factorial = %d",factorial(num));
}