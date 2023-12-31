//C++ Program to Find the Length of a String
#include<iostream>
#include<string.h>
using namespace std;

int main(){

    string str;
    cout<<"enter a string :";
    cin>>str;

    int i=0;

    for(i=0;str[i];i++);
    
    cout<<i<<endl;

    return 0;
}