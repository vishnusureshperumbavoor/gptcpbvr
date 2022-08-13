#include <iostream>
using namespace std;
int r1,c1,r2,c2,i,j,m1[10][10],m2[10][10],sum[10][10];
int main(){
    cout << "For matrix additon the number of rows & columns of the 1st matrix should be equal to the number of rowsn & columns of the 2nd matrix\n";
    cout << "enter the rows and columns of the 1st matrix\n";
    cin >> r1 >> c1;
    cout << "enter the rows and columns of the 2nd matrix\n";
    cin >> r2 >> c2;
    if(r1!=r2 || c1!=c2)
        cout << "for matrix multiplication number of rows & columns of the 1st matrix should be equal to the number of rows & columns of the 2nd matrix\n";
    else{
        cout << "enter " << r1*c1 << " numbers of the 1st matrix\n";
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++)
                cin >> m1[i][j];
        }
        cout << "enter " << r2*c2 << " numbers of the 2nd matrix\n";
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++)
                cin >> m2[i][j];
        }
        cout << "1st matrix\n";
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++)
                cout << m1[i][j] << "\t";
            cout << "\n";
        }
        cout << "2nd matrix\n";
        for(i=0;i<r2;i++){
            for(j=0;j<c2;j++)
                cout << m2[i][j] << "\t";
            cout << "\n";
        }
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++){
                    sum[i][j]=m1[i][j]+m2[i][j];
            }
        }
        cout << "Addition of 2 matrices\n";
        for(i=0;i<r1;i++){
            for(j=0;j<c2;j++)
                cout << sum[i][j] << "\t";
            cout << "\n";
        }
    }
}