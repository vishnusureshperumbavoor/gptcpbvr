// 2,3,5,7,11,13,17,19,23,29
// prime numbers - number greater than 1 whose only factors are 1 and itself
// composite numbers - number greater than 1 that is not a prime
// one is neither prime nor composite 
// negative numbers cannot be prime or composite
#include <stdio.h>
void main(){
    int range;
    printf("enter the range\n");
    scanf("%d",&range);
    printf("prime numbers\n");
    for(int i=2;i<=range;i++){
        int flag =0;
        for(int j=1;j<=i;j++){
            if(i%j==0)
                flag++;
        }
        if(flag==2)
            printf("%d\t",i);
    }
}
