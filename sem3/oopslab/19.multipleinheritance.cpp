#include <iostream>
using namespace std;
class setData{
    protected:
        int rollno,i;
        string name;
    public:
        void set();
};
class computeData {
    protected:
        int avg,i;
        float mark[3],total;
        char grade;
    public:
        void compute();
};
class getData : public setData , public computeData{
    public:
        void get();
};
void setData::set(){
    cout << "enter student rollno\n";
            cin >> rollno;
            cout << "enter student name\n";
            cin >> name;
}
void computeData::compute(){
    cout << "enter mark of the student for 3 subjects\n";
        for(i=0;i<3;i++){
            cin >> mark[i];
            total+=mark[i];
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
void getData::get(){
    cout << "rollno\tname\ttotal\tavg\tgrade\n";
        cout <<  rollno << "\t" << name << "\t" << total << "\t" << avg << "\t" << grade << endl;
}
int main(){
    getData g;
    g.set();
    g.compute();
    g.get();
}

// function should be public or else main function cant call it 
// inheritance should be public. protected inheritance can call inside main fuction