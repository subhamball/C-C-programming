//protected members are inaccessible outside of the class.
//they can be accessed by derived classes and friend classes/functions
#include<iostream>
using namespace std;

class Animal{

    private:
        string color;

    protected:
        string type;

    public:
        void eat(){
            cout<<"I can Eat"<<endl;
        }
        void sleep(){
            cout<<"I Can Sleep"<<endl;
        }
        void setColor(string clr){
            color = clr;
        }
        string getColor(){
            return color;
        }

};

class dog : public Animal{
    public :
        void bark(){
            cout<<"i can bark"<<endl;
        }
        void setType(string tp){
            type = tp;
        }
        void displayingInfo(string c){
            cout<<"I am a "<<type<<endl;
            cout<<"my color is "<<c<<endl;
        }
};

int main(){

    dog d;

    d.eat();
    d.sleep();
    d.setColor("Red");

    d.setType("Mamal");
    d.bark();
    d.displayingInfo(d.getColor());

    return 0;
}