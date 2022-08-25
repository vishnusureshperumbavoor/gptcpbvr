// 2,3,5,7,11,13,17,19,23,29
// prime numbers - number greater than 1 whose factors are 1 and itself
// composite numbers - number greater than 1 that is not a prime
// one is neither prime nor composite 
// negative numbers cannot be prime or composite
#include <stdio.h>
void main(){
    int range,i,j,flag;
    printf("enter the range\n");
    scanf("%d",&range);
    printf("prime numbers\n");
    for(i=2;i<=range;i++){
        flag=0;
        for(j=1;j<=i;j++){
            if(i%j==0)
                flag++;
        }
        if(flag==2)
            printf("%d\t",i);
    }
}
