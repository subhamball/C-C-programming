#include<iostream>
using namespace std;

int main(){

    int year;
    cout<<"enter a year: ";
    cin>>year;

    if(year%4==0){
        if(year%400==0){
            cout<<"Your enterd year is leapyear: "<<year<<endl;
        }
        else{
            if(year%100==0){
                cout<<"Your enterd year is not leapyear: "<<year<<endl;
            }
            else{
                cout<<"Your enterd year is leapyear: "<<year<<endl;
            }
        }
    }
    else{
        cout<<"Your enterd year is not leapyear: "<<year<<endl;
    }

    return 0;
}