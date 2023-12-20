#include<iostream>
using namespace std;

int main(){
    int num,rev=0,temp;
    cout<<"enter a number: ";
    cin>>num;

    temp=num;

    while(temp){
        rev = rev*10 + temp%10;
        temp=temp/10;
    }

    if(rev==num){
        cout<<"this number is palindrom :"<<num<<endl;
    }
    else{
        cout<<"this number is not palindrom :"<<num<<endl;
    }

    return 0;
}