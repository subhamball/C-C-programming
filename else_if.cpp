#include<iostream>
using namespace std;

int main(){

    double num;
    cout<<"enter a integer number: ";
    cin>>num;

    if(num>0){
        cout<<"positive number"<<endl;
    }
    else if(num<0){
        cout<<"negetive number"<<endl;
    }
    else{
        cout<<"Zero"<<endl;
    }

    return 0;

}