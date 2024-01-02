#include<iostream>
using namespace std;

int a=10,b=20;

void add(){
    //local variable to main
    int a=5,b=3;
    cout<<a+b<<endl;
}

int main(){

    add();
    cout<<a+b<<endl;

    return 0;
}