#include <iostream>
using namespace std;
class complex{
    int real,imag;
    public:
        void set();
        void display();
        complex operator++(int){
            real++;
            imag++;
        };
        complex operator--(){
            real--;
            imag--;
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
    complex c;
    c.set();
    c.display();
    c++;
    c.display();
    --c;
    c.display();
}

