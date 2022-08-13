// s1 - elon    s2 - musk   strcpy(s1,s2) - musk (s2 copied to s1)       strcat(s2,s1) - elon
#include <stdio.h>
#include <string.h>
void withstrcpy(char s1[10]){
    char s2[30]="liusdkhgvsfdsvfds";
    printf("with strcpy = %s\n",strcpy(s2,s1));
}
void withoutstrcpy(char s1[10]){
    char s2[30]="foldasjfnlkjcdsfn";
    int i;
    for(i=0;s1[i]!='\0';i++)
        s2[i]=s1[i];
    s2[i]='\0';
    printf("without strcpy = %s\n",s2);
}
void main(){
    char s1[10];
    printf("enter a string\n");
    gets(s1);
    printf("string1 has been copied to string2\n");
    withstrcpy(s1);
    withoutstrcpy(s1);
}