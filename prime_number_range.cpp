#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;

    for(int i=2;i<=num;i++){
        int flag=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<i<<endl;
        }
    }
    return 0;
}