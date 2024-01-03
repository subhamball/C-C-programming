#include<iostream>
using namespace std;

class student{
    public:
        double marks;

        student(double m){
            marks = m;
        }
};

void add(student s1, student s2){
    double sum = s1.marks + s2.marks;
    cout<<"sum of the two student marks: "<<sum<<endl;
}

int main(){

    student student1(88.2);
    student student2(95.6);

    add(student1, student2);

    return 0;
}