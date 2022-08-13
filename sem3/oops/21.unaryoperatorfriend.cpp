#include <iostream>
using namespace std;
class complex{
    int real,imag;
    public:
        void set();
        void display();
        friend complex operator++(complex &obj);
        friend complex operator--(complex &obj);
};
void complex::set(){
    cout << "enter real and imaginary number" << endl;
    cin >> real >> imag;
}
void complex::display(){
    cout << real << "+i" << imag << endl;
}
complex operator++(complex &obj){
    obj.real++;
    obj.imag++;
}
complex operator--(complex &obj){
    obj.real--;
    obj.imag--;
}
int main(){
    complex c;
    c.set();
    c.display();
    ++c;
    c.display();
    --c;
    c.display();
}