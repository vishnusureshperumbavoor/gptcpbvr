// num = 5          factorial = 5*4*3*2*1      ||       1*2*3*4*5
#include <iostream>
using namespace std;
int factorial(int num){
    if(num==1)
        return 1;
    else 
        return num*factorial(num-1);
}
void main(){
    int num,i=1;
    // while loop
    cout << "enter a number\n";
    cin >> num;
    //5*4*3*2*1
    while(num>=1){
        i*=num;
        num--;
    }
    cout << "factorial = " << i << endl;

    // forloop
    int fact=1;
    cout << "enter a number\n";
    cin >> num;
    //1*2*3*4*5
    for(i=1;i<=num;i++)
        fact*=i;
    cout << "factorial = " << i << endl;

    // recursive 
    cout << "enter a number\n";
    cin >> num;
    cout << "factorial = " << factorial(num) << endl;
}