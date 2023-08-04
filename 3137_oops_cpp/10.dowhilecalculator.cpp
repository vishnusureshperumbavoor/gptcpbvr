#include <iostream>
using namespace std;
int main(){
    int a,b,flag;
    char op;
    do{
    cout << "enter 2 numbers" << endl;
    cin >> a >> b;
    cout << "enter the arithmetic operation" << endl;
    cin >> op;
    switch(op){
        case '/':
            cout << a << op << b << " = " << a/b << endl;
            break;
        case '*':
            cout << a << op << b << " = " << a*b << endl;
            break;
        case '+':
            cout << a << op << b << " = " << a+b << endl;
            break;
        case '-':
            cout << a << op << b << " = " << a-b << endl;
            break;
        case '%':
            cout << a << op << b << " = " << a%b << endl;
            break;
        default:
            cout << "enter valid operation" << endl;
            break;
    }
    cout << "press 1 continue any other key to discontinue" << endl;
    cin >> flag;
    }while(flag==1);

}