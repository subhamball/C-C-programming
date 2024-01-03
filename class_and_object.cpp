#include<iostream>
using namespace std;

//create a class
class room{

    public:
        double length;
        double breadth;
        double height;

        //create a method to calclate area of the room
        double area(){
            return length * breadth;
        }

        //create a method to calculate volume of the room
        double volume(){
            return length * breadth * height;
        }

};

int main(){

    //instantiate of the class room
    room r;

    r.length = 12.5;
    r.breadth = 8.9;
    r.height = 10;

    cout<<"area of the room is: "<<r.area()<<endl;
    cout<<"volume of the room is: "<<r.volume()<<endl;
   
    return 0;
}