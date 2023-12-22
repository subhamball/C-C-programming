//C++ Program to Find GCD

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int num1,num2;
    cout<<"enter 1st number :";
    cin>>num1;
    cout<<"enter 2nd number :";
    cin>>num2;

    while(num1 != num2){
        if(num1>num2){
            num1 = num1 - num2;
        }
        else{
            num2 = num2 - num1;
        }
    }
    cout<<"gcd is : "<<num1<<endl;

    return 0;
}