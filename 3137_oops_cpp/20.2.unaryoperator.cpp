#include <iostream>
using namespace std;

class A{
    int num1,num2;
    public:
    A(int n1,int n2){
        num1 = n1;
        num2 = n2;
    }
    void getdata(){
        cout << "num1 = " << num1 << "\t num2 = " << num2 << endl;
    }
    void operator-(){
        num1 = -num1;
        num2 = -num2;
    }
}; 

int main(){
    A a(10,20);
    a.getdata();
    -a;
    a.getdata();
}