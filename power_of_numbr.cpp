#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int num,expo;
    cout<<"enter a number :";
    cin>>num;
    cout<<"enter a exponent :";
    cin>>expo;

    int pow=1;

    for(int i=1;i<=expo;i++){
        pow *= num;

    }
    cout<<"power of the number is :"<<pow<<endl;

    return 0;
}