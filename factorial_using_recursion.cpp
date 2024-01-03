#include<iostream>
using namespace std;

int factorial(int n){
    if(n>1){
        return n*factorial(n-1); 
    }
    else{
        return 1;
    }
}

int main(){
    int num, fact;
    cout<<"enter a number: ";
    cin>>num;

    fact = factorial(num);
    cout<<"factorial is: "<<fact<<endl;

    return 0;
}