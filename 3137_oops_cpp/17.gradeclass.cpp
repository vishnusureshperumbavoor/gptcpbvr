#include <iostream>
using namespace std;
class student{
    int rollno,i,j,avg;
    string name;
    float mark[3],total;
    char grade;
    public :
        void setData();
        void getData();
};
void student::setData(){
        cout << "enter student rollno\n";
        cin >> rollno;
        cout << "enter student name\n";
        cin >> name;
        cout << "enter mark of the student for 3 subjects\n";
        for(j=0;j<3;j++){
            cin >> mark[j];
            total+=mark[j];
        }
        avg = total/3;
        switch(avg/10){
            case 10:
                grade = 'S';
                break;
            case 9:
                grade = 'S';
                break;
            case 8:
                grade = 'A';
                break;
            case 7:
                grade = 'B';
                break;
            case 6:
                grade = 'C';
                break;
            case 5:
                grade = 'D';
                break;
            case 4:
                grade = 'E';
                break;
            default:
                grade = 'F';
                break;
        }
}
void student::getData(){
    cout <<  rollno << "\t" << name << "\t" << total << "\t" << avg << "\t" << grade << endl;
}
int main(){
    student s,g;
    s.setData();
    g.setData();
    cout << "rollno\tname\ttotal\tavg\tgrade\n";
    s.getData();
    g.getData();
}

// struct                               class
// static struct student s[2];         student s,g;