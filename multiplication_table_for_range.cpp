//C++ Program to Generate Multiplication Table for a range of number
#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int num1,num2;
    cout<<"enter first number  : ";
    cin>>num1;
    cout<<"enter second number  : ";
    cin>>num2;

    cout<<"................multiplication table................"<<endl;
    for(int i=num1;i<=num2;i++){
        cout<<"table for : "<<num1<<endl;
        for(int j=1;j<=10;j++){
            cout<<i <<" * "<<j <<" : " <<i*j<<endl;
        }
        cout << endl << endl << endl;
        
    }

}