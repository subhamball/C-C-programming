#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter length of the array: ";
    cin>>n;
    int a[n];
    cout<<"enter element of the array: "<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum += a[i];
    }
    cout<<"average of the arraye element is: "<<sum/n<<endl;

    return 0;
}