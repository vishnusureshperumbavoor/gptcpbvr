#include <iostream>
using namespace std;
struct student{
    int rollno,avg;
    string name;
    float mark[3],total;
    char grade;
};
int main(){
    static struct student s[100];
    int n,i,j;
    cout << "enter the number of students\n";
    cin >> n;
    for(i=0;i<n;i++){
        cout << "student number " << i+1 << endl;
        cout << "enter student rollno\n";
        cin >> s[i].rollno;
        cout << "enter student name\n";
        cin >> s[i].name;
        cout << "enter mark of the student for 3 subjects\n";
        for(j=0;j<3;j++){
            cin >> s[i].mark[j];
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
    cout << "index\trollno\tname\ttotal\tavg\tgrade\n";
    for(i=0;i<n;i++)
        cout << i+1 << "\t" << s[i].rollno << "\t" << s[i].name << "\t" << s[i].total << "\t" << s[i].avg << "\t" << s[i].grade << endl;
}