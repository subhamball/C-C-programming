//C++ Program to Convert Binary Number to Decimal 
#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int b_num,d_num=0;
    cout<<"enter a binary number :";
    cin>>b_num;
    int rem=0,i=0;

    while(b_num){
        rem = b_num % 10;
        b_num = b_num / 10;
        d_num += rem * pow(2,i);
        i++;
    }  

    cout<<"decimal number is :"<<d_num<<endl;

    return 0;
}