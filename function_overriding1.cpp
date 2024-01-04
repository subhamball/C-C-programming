//To access the overridden function of the base class, we use the scope resolution operator ::

#include<iostream>
using namespace std;

class base{
    public:
        void print(){
            cout<<"Base Class"<<endl;
        }
};

class child: public base{
    public:
        void print(){
            cout<<"child Class"<<endl;
        }
};

int main(){

    child ch1,ch2;
    ch1.print();

    ch2.base::print();

    return 0;
}