#include <iostream>
using namespace std;
int main(){
    int num,mod,rev=0;
    cout << "enter a number" << endl;
    cin >> num;
    while(num!=0){
        mod=num%10;
        rev=rev*10+mod;
    }
    cout << rev << endl;
}