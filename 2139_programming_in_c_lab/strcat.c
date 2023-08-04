// s1 - elon    s2 - musk   strcat(s1,s2) - elonmusk (s2 concatenated to s1)       strcat(s2,s1) - muskelon
#include <stdio.h>
#include <string.h>
void withstrlen(char s1[10],char s2[10]){
    printf("with strcat = %s\n",strcat(s1,s2));
}
void withoutstrlen(char s1[10],char s2[10]){
    int i,j;
    for(i=0;s1[i]!='\0';i++);
    for(j=0;s2[j]!='\0';j++,i++)
        s1[i] = s2[j];
    s1[i]='\0';
    printf("without strcat = %s\n",s1);
}
void main(){
    char s1[10],s2[10];
    printf("enter 2 strings\n");
    gets(s1);
    gets(s2);
    printf("string2 concatenated to string1\n");
    withstrlen(s1,s2);
    withoutstrlen(s1,s2);
}