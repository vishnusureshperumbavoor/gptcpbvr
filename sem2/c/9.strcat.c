// 1st string - elon    2nd string - musk   concatenated - elon musk
#include <stdio.h>
void main(){
    char s1[10],s2[10];
    int i=0,j=0;
    printf("enter 1st string\n");
    gets(s1);
    printf("enter 2nd string\n");
    gets(s2);
    // to set i index at the end of the 1st string
    while(s1[i]!='\0')
        i++;

    while(s2[j]!='\0'){
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
    printf("concatenated string is %s\n",s1);
}