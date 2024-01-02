#include <iostream>
using namespace std;

int main() {

    int num,sum=0;
    cout<<"enter a number: ";
    cin>>num;

    while(num>0){
        sum += num;
        cin>>num;
    }
    cout<<"sum = "<<sum<<endl;

    return 0;
}