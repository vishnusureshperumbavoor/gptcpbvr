#include <iostream>
using namespace std;

class A{ // a class that contain pure virtual function is known as abstract class
    public: // you cannot create object of a parent class, but you can create pointer to a parent class
    virtual void display() = 0;
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
    a->display();    // child class
}