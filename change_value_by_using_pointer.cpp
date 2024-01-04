#include<iostream>
using namespace std;

int main(){

    int num,*ptr;
    num=10;
    ptr=&num;

    cout<<"value of variable before change is: "<<num<<endl;
    *ptr =20;
    cout<<"value of pvalue of vriable after change is: "<<num<<endl;

    return 0;
}