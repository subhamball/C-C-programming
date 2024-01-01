//Working of implicit type-conversion
//The type conversion that is done automatically done by the compiler is known as implicit type conversion.
// This type of conversion is also known as automatic conversion.
#include<iostream>
using namespace std;

int main(){

    int num1;
    cout<<"enter a integer number: ";
    cin>>num1;

    double num2;

    //implicit conversion
    num2 = num1;

    cout<<"num1: "<<num1<<endl;
    cout<<"num2: "<<num2<<endl;

    return 0;

}