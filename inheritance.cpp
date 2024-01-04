#include<iostream>
using namespace std;

class Animal{

    public:
        void eat(){
            cout<<"I can Eat"<<endl;
        }
        void sleep(){
            cout<<"I Can Sleep"<<endl;
        }

};

class dog : public Animal{
    public :
        void bark(){
            cout<<"i can bark"<<endl;
        }
};

int main(){

    dog d;

    d.eat();
    d.sleep();

    d.bark();

    return 0;
}