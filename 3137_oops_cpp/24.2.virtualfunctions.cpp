#include <iostream>
using namespace std;

class A{
    public:
    virtual void display(){
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
    B b;
    b.display();    // child class
}