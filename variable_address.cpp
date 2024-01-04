//pointers are variables that store the memory addresses of other variables
//If we have a variable var in our program, &var will give us its address in the memory.

#include<iostream>
using namespace std;

int main(){

    int num;

    cout<<"address of this variable is :"<<&num<<endl;

    return 0;
}