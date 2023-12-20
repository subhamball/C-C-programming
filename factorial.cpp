#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;

    int fact=1;
    while(num){
        if(num==0){
            break;
        }
        fact *= num;
        num=num-1;
        
    }
    cout<<"factorial is : "<<fact<<endl;
    
    return 0;
}