#include<iostream>
using namespace std;

int main(){

    char ch;
    cout<<"Enter a character: "<<ch;
    cin>>ch;

    if(ch=='A' || ch=='a' || ch=='E' || ch=='e' || ch=='I' || ch=='i' || ch=='O' || ch=='o' || ch=='U' || ch=='u'){
        cout<<"Vowel"<<endl;
    }
    else{
        cout<<"consonent"<<endl;
    }
}