#include <stdio.h>
#include <string.h>
void withstrrev(char name[20]){
    printf("%s = ",name);
    printf("%s\n",strrev(name));
}
void withoutstrrev(char name[20]){
    int i,j;
    for(i=0;name[i]!='\0';i++);
    printf("%s = ",name);
    for(j=i-1;j>=0;j--)
        printf("%c",name[j]);
}
int main(){
    char name[20];
    printf("enter a string\n");
    gets(name);
    withstrrev(name);
    withoutstrrev(name);
}