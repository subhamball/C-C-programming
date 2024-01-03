//A constructor is a special type of member function that is called automatically when an object is created.
//A constructor with no parameters is known as a default constructor

#include <iostream>
using namespace std;

class MyClass {
public:
    // Default constructor
    MyClass() {
        cout << "Default constructor called." << endl;
    }

};

int main() {
    // Creating an object of MyClass
    MyClass obj;

    return 0;
}
