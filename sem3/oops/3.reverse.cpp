#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "enter a number" << endl;
    cin >> a;
    for(c=0;a!=0;a/=10){
        b = a%10;
        c = c*10+b;
    }
    cout << c << endl;
}