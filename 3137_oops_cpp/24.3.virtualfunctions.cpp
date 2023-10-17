#include <iostream>
using namespace std;

class A{
    public:
    void display(){
        cout << "parent class";
    }
};

class B: public A{
    public:
    void display(){
        cout << "child class";
    }
};

int main(){
    A *a;
    B b;
    a = &b;
    a->display();    // parent class
}