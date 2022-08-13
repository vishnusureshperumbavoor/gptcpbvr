// x =  -b (+ || -) ((sqrt(b**2)-4ac)/(2a))
// quadratic equation = a(pow(x,2))+bx+c        (a,b-coefficients     x - variable      c - constant)
// if (pow(b,2))-4ac  <= -1     imaginary root
// if (pow(b,2))-4ac  = 0       equal root
// if (pow(b,2))-4ac  >=1       real root
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a,b,c,p;
    cout << "enter a,b coefficients and c constant" << endl;
    cin >> a >> b >> c;
    p = pow(b,2)-4*a*c;
    if(p<=-1)
        cout << "imaginary roots" << endl;
    else if(p==0){
        int q = -b / (2*a);
        cout << "equal root. Value of x = " << q << endl;
    }
    else{
        int q = (-b + sqrt(p)) / (2*a);
        int r = (-b - sqrt(p)) / (2*a);
        cout << "real roots. Values of x = " << q << " and " << r << endl;
    }
}