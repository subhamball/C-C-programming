#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){

    int num1=10,num2=20;
    cout<<"num1 and num2 value before swap: "<<num1<<" "<<num2<<endl;

    swap(num1,num2);

    cout<<"num1 and num2 value after swap: "<<num1<<" "<<num2<<endl;

    return 0;
}