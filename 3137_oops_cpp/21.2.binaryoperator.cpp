#include <iostream>
using namespace std;

class A{
    int num1,num2;
    public:
    void setdata(int n1,int n2){
        num1 = n1;
        num2 = n2;
    }
    void getdata(){
        cout << "num1 = " << num1 << "\t num2 = " << num2 << endl;
    }
    A operator*(A c){
        A temp;
        temp.num1 = num1 * c.num1;
        temp.num2 = num2 * c.num2;
        return temp;
    }
};

int main(){
    A a1, a2, a3;
    a1.setdata(2,3);
    a2.setdata(5,6);
    a1.getdata();
    a2.getdata();
    a3 = a1 * a2;
    a3.getdata();
}