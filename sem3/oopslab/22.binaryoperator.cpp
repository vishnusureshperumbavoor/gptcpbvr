#include <iostream>
using namespace std;
class complex{
    int real,imag;
    public:
        void set();
        void display();
        complex operator+(complex obj){
            complex a;
            a.real = real + obj.real;
            a.imag = imag + obj.imag;
            return a;
        };
        complex operator-(complex obj){
            complex a;
            a.real = real - obj.real;
            a.imag = imag - obj.imag;
            return a;
        };
};
void complex::set(){
    cout << "enter real and imaginary number" << endl;
    cin >> real >> imag;
}
void complex::display(){
    cout << real << "+i" << imag << endl;
}
int main(){
    complex c1,c2,sum,diff;
    c1.set();
    c2.set();
    c1.display();
    c2.display();
    sum = c1+c2;
    sum.display();
    diff = c1-c2;
    diff.display();
}