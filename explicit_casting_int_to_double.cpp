//When the user manually changes data from one type to another, this is known as explicit conversion. 
//This type of conversion is also known as type casting.
#include<iostream>
using namespace std;

int main(){

    int num1;
    cout<<"enter a integer number: ";
    cin>>num1;

    double num2;

    //implicit conversion
    num2 = (double)num1;

    cout<<"num1: "<<num1<<endl;
    cout<<"num2: "<<num2<<endl;

    return 0;

}