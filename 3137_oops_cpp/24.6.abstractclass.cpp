// why abstract class
#include <iostream>
using namespace std;

class A{ // a class which contain pure virtual function is called abstract class  // you cannot create object of abstract class
    public:
    // a function which contain pure specifier (= 0) is called pure virtual function
    virtual void display() = 0;
};

class B: public A{
    public:
};

int main(){
    A a;  // object for abstract class is not allowed. CT error
    B b;   // if we didnt define the abstract class function in derived class, it's CT error
}