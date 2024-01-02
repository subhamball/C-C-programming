#include<iostream>
using namespace std;

void add(int a=10, int b=20){
    cout<<a+b<<endl;
}

int main(){

    add(5,3);
    add();

    return 0;
}