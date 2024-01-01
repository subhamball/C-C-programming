//C++ Program to Concatenate Two Strings
#include<iostream>
#include<string.h>
using namespace std;

int main(){

    string str1, str2;
    cout<<"enter first string :"<<endl;
    cin>>str1;
    cout<<"enter second string :"<<endl;
    cin>>str2;

    string Con_str;
    Con_str = str1 + " " + str2;
 
    cout<<"after concatinate string is :"<<Con_str<<endl;

    return 0;

}