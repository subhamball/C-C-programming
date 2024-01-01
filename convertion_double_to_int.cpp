#include<iostream>
using namespace std;

int main(){

    double num1;
    cout<<"enter a double number: ";
    cin>>num1;

    int num2;

    //implicit conversion
    num2 = num1;

    cout<<"num1: "<<num1<<endl;
    cout<<"num2: "<<num2<<endl;

    return 0;

}