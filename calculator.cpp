#include<iostream>
using namespace std;

int main(){

    int num1,num2;
    cout<<"enter two numbers :";
    cin>>num1>>num2;

    cout<<"for Addition type 1 "<<endl;
    cout<<"for Substruction type 2 "<<endl;
    cout<<"for Multiplication type 3 "<<endl;
    cout<<"for Division type 4 "<<endl;

    int option;
    cout<<"choose your option :";
    cin>>option;

    switch(option){
        case 1 :
            cout<<"Addition of two number is :"<<num1+num2<<endl;
            break;
        case 2 :
            cout<<"Substruction of two number is :"<<num1-num2<<endl;
            break;
        case 3 :
            cout<<"Multiplication of two number is :"<<num1*num2<<endl;
            break;
        case 4 :
            cout<<"Division of two number is :"<<num1/num2<<endl;
            break;
        default :
            cout<<"Ypu enter a wrong option :"<<option<<endl;
            break;

    }

    return 0;

}