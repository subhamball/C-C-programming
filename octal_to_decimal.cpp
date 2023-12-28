#include<iostream>
#include<cmath>
using namespace std;

int main(){
    
    int oct_num,de_num=0;
    cout<<"enter a octal number :";
    cin>>oct_num;
    int rem=0,i=0;

    while(oct_num){
        rem = oct_num % 10;
        oct_num = oct_num/10;
        de_num += rem * pow(8,i);
        i +=1;
    }
    cout<<"decimal number is :"<<de_num<<endl;

    return 0;
}