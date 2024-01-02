#include<iostream>
using namespace std;

//function declaretion and defination
int add(int a, int b){

    return a+b;
}

int main(){

    int num1, num2;
    cout<<"enter two number: ";
    cin>>num1>>num2;
    int sum;

    // calling function
    sum = add(num1,num2);
    cout<<"sum of two number is: "<<sum<<endl;

    return 0;
}