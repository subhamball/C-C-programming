#include<iostream>
using namespace std;

class Animal{
    public:
        void speak(){
            cout<<"I can Speak"<<endl;
        }

};

class cat: public Animal {
    public:
        void meow(){
            cout<<"I can meow"<<endl;
        }

};

class Dog: public Animal {
    public:
        void bark(){
            cout<<"I can bark"<<endl;
        }

};

int main(){

    Animal ani;
    ani.speak();

    cat c;
    c.speak();
    c.meow();

    Dog d;
    d.speak();
    d.bark();

    return 0;

}