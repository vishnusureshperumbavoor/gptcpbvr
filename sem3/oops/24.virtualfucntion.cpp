#include <iostream>
using namespace std;
class polygon{
    int real,imag;
    public:
        void set();
        void display();
        friend complex operator+(complex obj1,complex obj2);
        friend complex operator-(complex obj1,complex obj2);
};
class rectangle : public polygon{
    int real,imag;
    public:
        void set();
        void display();
        friend complex operator+(complex obj1,complex obj2);
        friend complex operator-(complex obj1,complex obj2);
};
class triangle : public polygon{
    int real,imag;
    public:
        void set();
        void display();
        friend complex operator+(complex obj1,complex obj2);
        friend complex operator-(complex obj1,complex obj2);
};
void complex::set(){
    cout << "enter real and imaginary number" << endl;
    cin >> real >> imag;
}
void complex::display(){
    cout << real << "+i" << imag << endl;
}
complex operator+(complex obj1,complex obj2){
    complex a;
    a.real = obj1.real + obj2.real;
    a.imag = obj1.imag + obj2.imag;
    return a;
}
complex operator-(complex obj1,complex obj2){
    complex a;
    a.real = obj1.real - obj2.real;
    a.imag = obj1.imag - obj2.imag;
    return a;
}
int main(){
    rectangle r;
    triangle r;
    polygon *p;
    p=&r;
    p->area();
    p->display();
    p=&t;
    p->area();
    p->display();
}