#include <iostream>
using namespace std;
int main(){
    int height;
    cout << "enter the height of the hill" << endl;
    cin >> height;
    for(int i=0;i<height;i++){
        for(int j=i;j>=0;j--)
            cout << "*" << "\t";
        cout << endl;
    }
}