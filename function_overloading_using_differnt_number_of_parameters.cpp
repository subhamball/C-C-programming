#include<iostream>
using namespace std;

void add(int a, int b){
    cout<<a+b<<endl;
}

void add(int a, int b, int c){
    cout<<a+b+c<<endl;
}

int main(){

    add(5,3);
    add(5,3,4);
    return 0;
}