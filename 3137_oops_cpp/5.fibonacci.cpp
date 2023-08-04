// 0,1,1,2,3,5,8,13 briefly explained at sem2 c
#include <iostream>
using namespace std;
int main(){
    int a=0,b=1,c,num;
    cout << "enter the limit" << endl;
    cin >> num;
    cout << a << "\t" << b << "\t" ;
    for(int i=2;i<num;i++){
        c = a+b;
        cout << c << "\t";
        a=b;
        b=c;
    } 
}