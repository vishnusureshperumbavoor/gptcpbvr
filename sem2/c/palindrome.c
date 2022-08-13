#include <stdio.h>
#include <string.h>
void withoutstringfunctions(char name[20]){
    int i,j,flag=0;
    for(i=0;name[i]!='\0';i++);
    for(j=0;j<i;j++){
        if(name[j]!=name[i-j-1]){
            flag++;
            break;
        }
    }
    if(flag)
        printf("no palindrome\n");
    else
        printf("palindrome\n");
}
int main(){
    char name[20];
    printf("enter a string\n");
    gets(name);
    withoutstringfunctions(name);
}