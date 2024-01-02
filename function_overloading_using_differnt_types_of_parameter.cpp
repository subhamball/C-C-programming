#include<iostream>
using namespace std;

void display(int a){
    cout<<a<<endl;
}

void display(double a){
    cout<<a<<endl;
}

int main(){
    
    display(5);
    display(5.5);

    return 0;
}