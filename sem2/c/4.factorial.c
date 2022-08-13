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
    printf("enter a number\n");
    scanf("%d",&num);
    for(i=1;num>=1;num--)
        i*=num;
    printf("factorial = %d\n",i);

    // recursive 
    printf("enter a number\n");
    scanf("%d",&num);
    printf("factorial = %d",factorial(num));
}