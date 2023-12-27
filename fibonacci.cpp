//C++ Program to Display Fibonacci Series
#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int number,num1=0,num2=1;
    cout<<"enter number: ";
    cin>>number;

    int fibo=0;
    cout<<"------------------fibonacci series--------------------- "<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    for(int i=1;i<number;i++){
        fibo = num1 + num2;
        cout<<fibo<<endl;
        num1 = num2;
        num2 = fibo;
    }

    return 0;
    
}