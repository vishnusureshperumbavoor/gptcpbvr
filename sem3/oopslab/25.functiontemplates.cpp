#include <iostream>
using namespace std;
template <typename t>
t large(t n1,t n2){
    return (n1>n2) ? n1 : n2;
}
int main(){
    int i1,i2;
    float f1,f2;
    cout << "enter 2 integer numbers" << endl;
    cin >> i1 >> i2;
    cout << "largest integer numbers = " << large<int>(i1,i2) << endl;
    cout << "enter 2 float numbers" << endl;
    cin >> i1 >> i2;
    cout << "largest integer numbers = " << large<float>(i1,i2) << endl;
}   
// capital T didnt worked. why?