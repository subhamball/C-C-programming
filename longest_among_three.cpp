#include<iostream>
using namespace std;

int main(){

    int num1,num2,num3;
    cout<<"enter three numbers: "<<endl;
    cin>>num1>>num2>>num3;

    if(num1>num2){
        if(num1>num3){
            cout<<"largest number is :"<<num1<<endl;
        }
        else{
            cout<<"largest number is :"<<num3<<endl;
        }
    }
    else if(num2>num3){
        if(num2> num1){
            cout<<"largest number is :"<<num2<<endl;
        }
        else{
            cout<<"largest number is :"<<num1<<endl;
        }
    }
    else if(num3>num1){
        if(num3> num2){
            cout<<"largest number is :"<<num3<<endl;
        }
        else{
            cout<<"largest number is :"<<num2<<endl;
        }
    }
    else{
        cout<<"all number are equal"<<endl;
    }
}