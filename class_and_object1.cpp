#include<iostream>
using namespace std;

class room{

    private:
        double length;
        double height;
        double breadth;

    public:
        void initData(double len, double hgt, double brth){
            length = len;
            height = hgt;
            breadth = brth;
        }

        double area(){
            return length * breadth;
        }
        
        double volume(){
            return length * breadth * height;
        }
};

int main(){

    room r;

    r.initData(10.3, 5, 20);

    cout<<"area of this room is: "<<r.area()<<endl;
    cout<<"volume of this room is: "<<r.volume()<<endl;

    return 0;
}