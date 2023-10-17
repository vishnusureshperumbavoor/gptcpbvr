#include <iostream>
using namespace std;

// function templates with different datatypes

template <typename first,typename second>
void display(first n1,second n2){
    cout << n1 << n2;
}

int main(){
    int num1;
    float num2;
    cout << "enter an integer number and float number" << endl;
    cin >> num1 >> num2;
    display<int,float>(num1,num2);
}   