// strcmp (compare) (XOR gate)  s1 : elon      s2 : elon      s3 : Elon    s4 : elonmusk   
                                // strcmp(s1,s2) : 0       strcmp(s1,s3) : 1               strcmp(s1,s4) : -1
#include <stdio.h>
#include <string.h>
void withstrcmp(char s1[10],char s2[10]){
    if(strcmp(s1,s2)!=0)
        printf("%s and %s are different\n",s1,s2);
    else
        printf("%s and %s are same\n",s1,s2);
}
void withoutstrcmp(char s1[10],char s2[10]){
    int i,j,flag=0;
    for(i=0;s1[i]!='\0'||s2[i]!='\0';i++){
        if(s1[i]!=s2[i]){
            flag++;
            break;
        }
    }
    if(flag)
        printf("%s and %s are different\n",s1,s2);
    else 
        printf("%s and %s are same\n",s1,s2);
}
void main(){
    char s1[10],s2[10];
    printf("enter 2 strings\n");
    gets(s1);
    gets(s2);
    withstrcmp(s1,s2);
    withoutstrcmp(s1,s2);
}