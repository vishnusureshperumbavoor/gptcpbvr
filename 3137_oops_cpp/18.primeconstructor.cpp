#include <iostream>
using namespace std;
class prime{
    public :
        prime(int);
};
prime::prime(int num){
    if(num<=1)
        cout << "numbers less than or equal to 1 is neither prime nor composite" << endl;
    else{
        int i,flag=0;
        for(i=2;i<=num/2;i++){
                if(num%i==0){
                    flag++;
                    break;
                }
        }
        if(flag)
            cout << num << " is a composite number" << endl;
        else
            cout << num << " is prime number" << endl;
    }
}
int main(){
    int num;
    cout << "enter a number to find whether it is prime number or not" << endl;
    cin >> num;
    prime p(num);
}