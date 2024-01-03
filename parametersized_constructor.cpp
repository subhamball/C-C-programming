#include<iostream>
using namespace std;

class myclass{
    private:
        double length;
        double height;

    public:
        myclass(double len, double hgt){
            length = len;
            height = hgt;
        }

        double area(){
            return length * height;
        }
};

int main(){

    myclass mc(10.5, 15.5);
    myclass mc1(20, 15.2);

    cout<<"area of myclass1: "<<mc.area()<<endl;
    cout<<"area of myclass2: "<<mc1.area()<<endl;

    return 0;
}