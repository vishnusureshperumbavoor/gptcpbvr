// s = (a+b+c)/2        sqrt(s*(s-a)*(s-b)*(s-c))
#include <stdio.h>
#include <math.h>
void main(){
    float a,b,c,s;
    printf("enter 3 sides of the triangle\n");
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    s=s*(s-a)*(s-b)*(s-c);
    printf("area = %.2f",sqrt(s));
}
