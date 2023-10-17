#include <iostream>
using namespace std;

template <typename T>
T sum(T n1,T n2){
    return n1+n2;
}

int main(){
    int num1,num2;
    float num3,num4;
    cout << "enter 2 integer numbers" << endl;
    cin >> num1 >> num2;
    cout << "largest integer numbers = " << sum<int>(num1,num3) << endl;
    cout << "enter 2 float numbers" << endl;
    cin >> num3 >> num4;
    cout << "largest integer numbers = " << sum<float>(num3,num4) << endl;
}   