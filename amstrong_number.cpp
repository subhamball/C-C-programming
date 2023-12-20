#include<iostream>
using namespace std;

int main(){
    int num,ams=0,temp;
    cout<<"enter a number between 100 to 999 : ";
    cin>>num;

    temp=num;

    while(temp){
        ams += (temp%10)*(temp%10)*(temp%10);
        temp=temp/10;
    }

    if(ams==num){
        cout<<"this number is palindrom :"<<num<<endl;
    }
    else{
        cout<<"this number is not palindrom :"<<num<<endl;
    }

    return 0;
}