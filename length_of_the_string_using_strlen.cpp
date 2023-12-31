//C++ Program to Find the Length of a String
#include<iostream>
#include<string.h>
using namespace std;

int main(){

    string str;
    cout<<"enter a string :";
    cin>>str;

    cout<<strlen(str.c_str())<<endl;

    return 0;
}