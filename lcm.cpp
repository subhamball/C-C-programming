//C++ Program to Find LCM
// LCM = (Number1 * Number2)/GCD

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int num1,num2;
    cout<<"enter 1st number :";
    cin>>num1;
    cout<<"enter 2nd number :";
    cin>>num2;

    int temp1,temp2;
    temp1 = num1;
    temp2 = num2;

    while(num1 != num2){
        if(num1>num2){
            num1 = num1 - num2;
        }
        else{
            num2 = num2 - num1;
        }
    }
    cout<<"LCM is : "<<((temp1*temp2)/num1)<<endl;

    return 0;
}