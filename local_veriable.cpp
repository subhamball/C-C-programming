#include<iostream>
using namespace std;

void add(){
    //local variable to main
    int a=5,b=3;
    cout<<a+b<<endl;
}

int main(){

    //local to main
    int a=10,b=20;
    add();
    cout<<a+b<<endl;

    return 0;
}