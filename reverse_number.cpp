#include<iostream>
using namespace std;

int main(){

    int num,rev_num=0;
    cout<<"enter a number: ";
    cin>>num;

    while(num){
        rev_num=rev_num*10 + num%10;
        num=num/10;

    }
    cout<<"reverse number is: "<<rev_num<<endl;
    return 0;
}