//Structure is a collection of variables of different data types under a single name
#include<iostream>
using namespace std;

struct employee{
    char name[20];
    int age;
    float weight;
};

int main(){

    employee e,*ptr;
    ptr = &e;

    cout<<"enter emplyee name: ";
    cin>>(*ptr).name;
    cout<<"employee age: ";
    cin>>(*ptr).age;
    cout<<"enter employee weight: ";
    cin>>(*ptr).weight;

    cout << ".................Displaying Information................." << endl;
    cout << " Employee Name: " << (*ptr).name << endl;
    cout <<"Employee Age: " << (*ptr).age << endl;
    cout << "Employee weight: " << (*ptr).weight<<endl;

    return 0;
}