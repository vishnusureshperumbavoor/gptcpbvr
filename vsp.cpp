#include <iostream>
using namespace std;

template <typename first,typename second>
class A{
    public:
        void display(first n1,second n2){
            cout << n1 << "\t" << n2;
        }
};

int main(){
    int num1;
    float num2;
    A<int,float>a;
    cout << "enter an integer number and a float number" << endl;
    cin >> num1 >> num2;
    a.display(num1,num2);
}   