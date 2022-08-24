#include <iostream>
using namespace std;
int main(){
    int num,mod,sum=0;
    cout << "enter a number" << endl;
    cin >> num;
    while(num!=0){
        mod=num%10;
        sum+=mod;
    }
    cout << sum << endl;
}