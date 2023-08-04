#include <iostream>
using namespace std;
int main(){
    int num,lim;
    cout << "enter a number" << endl;
    cin >> num;
    cout << "enter the limit" << endl;
    cin >> lim;
    for(int i=1;i<=lim;i++){
        cout << num << " * " << i << " = " << num*i << endl;
    }
}