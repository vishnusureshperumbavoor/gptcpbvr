#include <iostream>
#include <math.h>
using namespace std;
int exponentiation(int b,int e){
    return pow(b,e);
}
int exponentiation2(int base,int exp){
    int i,p=1;
    for(i=1;i<=exp;i++)
        p*=base;
    return p;
}
int main(){
    int b,e;
    cout << "enter a base number and its exponent\n";
    cin >> b >> e;
    cout << b << " raised to the power of " << e << " = " << exponentiation(b,e) << endl;
    cout << b << " raised to the power of " << e << " = " << exponentiation2(b,e) << endl;
}