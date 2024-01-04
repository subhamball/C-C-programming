#include<iostream>
using namespace std;

int main(){

    int arr[5]={1,2,3,4,5};
    int *ptr;
    ptr = arr;

    cout<<"-------------Displaying element using array-------------"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"-------------Displaying element using pointer-------------"<<endl;
    for(int i=0;i<5;i++){
        cout<<*(ptr+i)<<" ";
    }
    cout<<endl;

    return 0;
}