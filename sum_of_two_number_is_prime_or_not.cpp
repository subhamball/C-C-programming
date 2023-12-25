//C++ Program to Check Whether a Number can be Express as Sum of Two Prime Numbers
#include<iostream>
using namespace std;

int main(){

    int number;
    cout<<"enter a number: ";
    cin>>number;
    int arr[number]={0};
    int k=0,count=0;
    for(int i=2;i<=number;i++){
        int flag=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=1;
            }
        }
        if(flag==0){
            
            arr[k]=i;
            k++;
        }
    }
    for(int i=0; i<number; i++){
        cout<<arr[i]<<endl;
    }
    for(int i=0;i<number;i++){
        for(int j=1;j<number;j++){
            if(arr[i] != arr[j]){
                if(arr[i]+arr[j] == number){
                count=1;
                break;
            }
            }
            
        }
    }

    if(count==1){
        cout<<"Yes, Number can be Express as Sum of Two Prime Numbers"<<endl;
    }
    else{
        cout<<"No, Number can not be Express as Sum of Two Prime Numbers"<<endl;
    }

    return 0;
}