#include<iostream>
using namespace std;

int main(){

    int num,*ptr;
    num=10;
    ptr=&num;

    cout<<"value of variable is: "<<num<<endl;
    cout<<"address of variable is: "<<&num<<endl;

    cout<<"value of pointer is: "<<ptr<<endl;
    cout<<"address of pointer is: "<<&ptr<<endl;

    return 0;
}