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

    for(int i=1;i<n;i++){
        if(a[0]<a[i]){
            a[0]=a[i];
        }
    }
    cout<<"largest element is : "<<a[0]<<endl;

    return 0;

}