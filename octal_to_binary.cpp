#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int b_num=0,dec_num=0,oct_num;
    cout<<"enter a octa number :";
    cin>>oct_num;

    int rem=0,i=0;
    int rem1=0,j=1;

    while(oct_num){
        rem = oct_num % 10;
        oct_num = oct_num/10;
        dec_num += rem * pow(8,i);
        i++;
    }
    cout<<"decimal number is :"<<dec_num<<endl;

    while(dec_num){
        rem1 = dec_num % 2;
        dec_num = dec_num / 2;
        b_num += rem1 * j;
        j *= 10;
    }
    cout<<"binary number is :"<<b_num<<endl;

    return 0;
}