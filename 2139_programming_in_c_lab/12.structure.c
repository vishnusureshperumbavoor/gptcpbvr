#include <stdio.h>
struct student{
    char name[20],grade;
    int rollno,avg;
    float mark[3],total;
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
        scanf("%s",s[i].name);
        printf("enter mark of the student for 3 subjects\n");
        // s[i].total=0;
        for(j=0;j<3;j++){
            scanf("%f",&s[i].mark[j]);
            s[i].total+=s[i].mark[j];
        }
        s[i].avg = s[i].total/3;
        switch(s[i].avg/10){
            case 10:
                s[i].grade = 'S';
                break;
            case 9:
                s[i].grade = 'S';
                break;
            case 8:
                s[i].grade = 'A';
                break;
            case 7:
                s[i].grade = 'B';
                break;
            case 6:
                s[i].grade = 'C';
                break;
            case 5:
                s[i].grade = 'D';
                break;
            case 4:
                s[i].grade = 'E';
                break;
            default:
                s[i].grade = 'F';
                break;
        }
    }
    printf("index\trollno\tname\ttotal\tavg\tgrade\n"); 
    for(i=0;i<n;i++)
        printf("%d\t%d\t%s\t%.2f\t%d\t%c\n",i+1,s[i].rollno,s[i].name,s[i].total,s[i].avg,s[i].grade);
}

// if static struct  -   no need to declare s[i].total = 0
// if struct  -   s[i].total = 0

// "S" cant be used only 'S'
// char grade[1] not allowed. grade