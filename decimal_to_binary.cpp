//C++ Program to Convert Decimal number to Binary Number #include<iostream>
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int b_num=0,d_num;
    cout<<"enter a decimal number :";
    cin>>d_num;
    int rem=0,i=1;

    while(d_num){
        rem = d_num % 2;
        b_num += rem * i;
        d_num = d_num / 2;
        i *= 10;
    }

    cout<<"binary number is :"<<b_num<<endl;

    return 0;
}