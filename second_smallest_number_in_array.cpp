#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter length of the array: ";
    cin>>n;
    int a[n];
    cout<<"enter element of array : ";

    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int temp=0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
        if(i==2){
            break;
        }
    }
    cout<<"second smallest number is: "<<a[1]<<endl;

    return 0;
}