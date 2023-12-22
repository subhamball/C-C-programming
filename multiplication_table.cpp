//C++ Program to Generate Multiplication Table
#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int number;
    cout<<"enter a number you want table : ";
    cin>>number;

    cout<<"................multiplication table................"<<endl;
    for(int i=1;i<=10;i++){
        cout<<i <<" * "<<number <<" : " <<i*number<<endl;
    }

}