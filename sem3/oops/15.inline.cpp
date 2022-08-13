#include <iostream>
#include <math.h>
using namespace std;
inline int product(int a,int b){
    return a*b;
}
inline int cube(int a){
    return pow(a,3);
}
int main(){
    int a,b;
    cout << "enter 2 numbers\n";
    cin >> a >> b;
    cout << a << "*" << b << " = " << product(a,b) << endl;
    cout << a << "**3 = " << cube(a) << endl;
    cout << b << "**3 = " << cube(b) << endl;
}