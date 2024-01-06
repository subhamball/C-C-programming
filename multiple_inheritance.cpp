#include<iostream>
using namespace std;

class Animal{
    public:
        void speak(){
            cout<<"I can Speak"<<endl;
        }

};

class mammal{
    public:
        void run(){
            cout<<"I can Run"<<endl;
        }

};

class Dog: public Animal, public mammal{
    public:
        void bark(){
            cout<<"I can bark"<<endl;
        }

};

int main(){

    Animal ani;
    ani.speak();

    mammal mam;
    mam.run();

    Dog d;
    d.speak();
    d.run();
    d.bark();

    return 0;

}