#include <iostream>
using namespace std;
int main(){
    int i,lim,arr[10],num;
    cout << "how many number u want to enter" << endl;
    cin >> lim;
    cout << "enter " << lim << " numbers" << endl;
    for(i=0;i<lim;i++)
        cin >> arr[i] ;
    for(i=0;i<lim;i++)
        cout << arr[i] << "\t";
    cout << endl;
    cout << "enter the number to find" << endl;
    cin >> num;
    for(i=0;i<lim;i++){
        if(arr[i]==num){
            cout << "entered number found at position " << i+1 << endl;
            break;
        }
    }
    if(i==lim)
        cout << "entered number not found" << endl;
}