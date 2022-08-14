#include <iostream>
using namespace std;
class polygon{
    public:
        void area();
        virtual void display()=0;
};
class rectangle : public polygon{
    int length,breadth;
    public:
        void area();
        void display();
};
void polygon::area(){
    cout << "base class" << endl;
}
void rectangle::area(){
    cout << "sub class" << endl;
}
void rectangle::display(){
    cout << "sub class" << endl;
}
int main(){
    rectangle r;
    polygon *p;
    p=&r;
    cout << "calling using class & object" << endl;
    r.area();
    cout << "calling non virtual function" << endl;
    p->area();
    cout << "calling virtual function" << endl;
    p->display();
}   

// pure virtual function 
// it must be overriden by the derived class so no need to be defined. declared using =0 syntax