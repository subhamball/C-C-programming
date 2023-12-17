#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int a[n][n], c[n][n];

    //storing element of first matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<endl;

    //perform transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            c[i][j]= a[j][i];
        }
    }
    cout<<endl;

    //printing the resultant matrix
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<c[i][j];
        }
        cout<<endl;
    }
    

    return 0;
}