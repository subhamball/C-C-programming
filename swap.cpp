#include<iostream>
using namespace std;

int main(){

    int num1,num2;
    cout<<"enter first number"<<endl;
    cin>>num1;
    cout<<"enter second number"<<endl;
    cin>>num2;

    num1=num1 + num2;
    num2=num1 - num2;
    num1=num1 - num2;

    cout<<"...........aftre swaping............ "<<endl;
    cout<<"num1 : "<<num1<<endl;
    cout<<"num2 : "<<num2<<endl;

    return 0;

}