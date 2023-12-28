#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int b_num,oct_num=0,dec_num=0;
    cout<<"enter a binary number: ";
    cin>>b_num;
    int rem=0,rem1=0,i=0,j=1;

    while(b_num){
        rem = b_num % 10;
        dec_num += rem * pow(2,i);
        b_num = b_num / 10;
        i++; 
    }
    cout<<"decimal number is :"<<dec_num<<endl;

    while(dec_num){
        rem1 = dec_num % 8;
        oct_num += rem1 * j;
        dec_num = dec_num/8;
        j *= 10;
    }
    cout<<"octal number is: "<<oct_num<<endl;

    return 0;
}