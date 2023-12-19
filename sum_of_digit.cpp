#include<iostream>
using namespace std;

int main(){

    int num;
    cout<<"enter a number: ";
    cin>>num;

    int res,sum=0;

    while(num){
        res=num%10;
        num=num/10;
        sum += res;
    }
    cout<<"sum of the digit is: "<<sum<<endl;

    return 0;
}