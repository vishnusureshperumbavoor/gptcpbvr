#include <iostream>
#include <math.h>
using namespace std;
void swap(int *n1,int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main(){
    int n1,n2;
    cout << "enter 2 numbers for swapping\n";
    cin >> n1 >> n2;
    cout << "before swapping\t" << n1 << "\t" << n2 << endl;
    swap(&n1,&n2);
    cout << "after swapping\t" << n1 << "\t" << n2 << endl;
}