#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    int oct_num=0,de_num;
    cout<<"enter a decimal number :";
    cin>>de_num;
    int rem=0,i=1;

    while(de_num){
        rem = de_num % 8;
        de_num = de_num/8;
        oct_num += rem * i;
        i = i*10;
    }
    cout<<"octal number is :"<<oct_num<<endl;

    return 0;
}