// positive integer that is equal to the sum of its proper divisors
// 6,28,496,8128
// 6 = 1+2+3
#include <iostream>
using namespace std;
int main(){
    int num,sum=0;
    cout << "enter a number" << endl;
    cin >> num;
    for(int i=1;i<num;i++){
        if(num%i==0)
            sum+=i;
    }
    if(sum==num)
        cout << "perfect" << endl;
    else
        cout << "not perfect" << endl;
}