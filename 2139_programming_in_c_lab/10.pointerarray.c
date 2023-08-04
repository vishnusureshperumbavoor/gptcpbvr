// printing array using pointers. it is called pointer arrays 
#include <stdio.h>
int main(){
    int a[5] = {11,22,33,44,55};
    int *p = &a[0];
    for(int i=0;i<5;i++)
        printf("%d\t",*(p+i));
}