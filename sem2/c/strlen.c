#include <stdio.h>
#include <string.h>
void withstrlen(char name[20]){
    printf("with strlen = %d\n",strlen(name));
}
void withoutstrlen(char name[20]){
    int i;
    for(i=0;name[i]!='\0';i++);
    printf("without strlen = %d\n",i);
}
int main(){
    char name[20];
    printf("enter a string\n");
    gets(name);
    withstrlen(name);
    withoutstrlen(name);
}