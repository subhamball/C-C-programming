#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter a number: ";
    cin>> num;

    do{
        cout<<num<<endl;
        num++;
    }while(num<10);

    return 0;
}