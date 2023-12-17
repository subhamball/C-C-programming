#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n][n], b[n][n], c[n][n];

    //storing elements of first matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;

    //storing elements of second matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    cout<<endl;

    //perform multiplication of two matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            // initialize elements of resultant matrix 0
            c[i][j]=0;
            for(int k=0;k<n;k++){
                c[i][j] += a[i][k] * b[k][j];

            }
        }
    }
    cout<<endl;

    //printing the result
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;

}