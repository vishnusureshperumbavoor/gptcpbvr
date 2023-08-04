#include <iostream>
using namespace std;
template <typename T>
class temp{
    public:
        T large(T,T);
};
template <typename T> T temp<T> :: large(T n1,T n2){
    return (n1>n2) ? n1 : n2;
}
int main(){
    int i1,i2;
    float f1,f2;
    temp<int>i;
    temp<float>f;
    cout << "enter 2 integer numbers" << endl;
    cin >> i1 >> i2;
    cout << "largest integer numbers = " << i.large(i1,i2) << endl;
    cout << "enter 2 float numbers" << endl;
    cin >> i1 >> i2;
    cout << "largest integer numbers = " << f.large(i1,i2) << endl;
}   