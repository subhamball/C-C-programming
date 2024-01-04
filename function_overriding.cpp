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

    child ch;
    ch.print();

    return 0;
}