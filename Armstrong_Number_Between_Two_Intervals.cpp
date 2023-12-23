#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int start_number,end_number;
    cout<<"enter first number: ";
    cin>>start_number;
    cout<<"enter last number: ";
    cin>>end_number;
    cout<<".........................amstrong_number........................"<<endl;

    for(int i=start_number;i<= end_number;i++){
        int temp=i,temp1=i;
        int amstrong_number=0;
        int rem;
        int no_of_digit=0;
        
        while(temp1){
            no_of_digit += 1;
            temp1=temp1/10;
        }

        while(temp){
            rem =temp%10;
            temp=temp/10;
            amstrong_number += pow(rem,no_of_digit);
        }
        
        if(amstrong_number == i){
            cout<<amstrong_number<<endl;
        }
    }
    
    return 0;

}