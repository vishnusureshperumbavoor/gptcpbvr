#include <iostream>
using namespace std;
int main(){
    int num,den;
    cout << "enter numerator and denominator" << endl;
    cin >> num>>den;
    try{
        if(den==0)
            throw den;
        cout << "div = " << num/den << endl;
    }
    catch(int ex){
        cout << "divison by denominator " << ex << " is not allowed"<< endl;
    }
}