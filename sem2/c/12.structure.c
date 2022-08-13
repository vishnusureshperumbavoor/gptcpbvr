#include <stdio.h>
struct student{
    char name[20];
    int rollno,subject[5],total;
};
void main(){
    static struct student s[100];
    int n,i,j;
    printf("enter the number of students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("student number %d\n",i+1);
        printf("enter student rollno\n");
        scanf("%d",&s[i].rollno);
        printf("enter student name\n");
        // & not need while scanf of strings
        scanf("%s",s[i].name);
        printf("enter mark of the student for 5 subjects\n");
        // s[i].total=0;
        for(j=0;j<5;j++){
            scanf("%d",&s[i].subject[j]);
            s[i].total+=s[i].subject[j];
        }
    }
    printf("index\trollno\tname\ttotal\n");
    for(i=0;i<n;i++)
        printf("%d\t%d\t%s\t%d\n",i+1,s[i].rollno,s[i].name,s[i].total);
}