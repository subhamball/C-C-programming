//Structure is a collection of variables of different data types under a single name
#include<iostream>
using namespace std;

struct employee{
    char name[20];
    int age;
    float weight;
};

int main(){

    employee e;
    cout<<"enter emplyee name: ";
    cin>>e.name;
    cout<<"employee age: ";
    cin>>e.age;
    cout<<"enter employee weight: ";
    cin>>e.weight;

    cout << ".................Displaying Information................." << endl;
    cout << " Employee Name: " << e.name << endl;
    cout <<"Employee Age: " << e.age << endl;
    cout << "Employee weight: " << e.weight<<endl;

    return 0;
}