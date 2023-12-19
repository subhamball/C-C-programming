#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int num,flag=0,i;
    cout<<"enter a number: ";
    cin>>num;

    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"your enterd number is not prime: "<<num<<endl;
    }
    else{
        cout<<"your enterd number is prime: "<<num<<endl;
    }
}