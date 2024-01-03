#include<iostream>
using namespace std;

enum week {sunday, monday, tuesday, wednesday, thursday, friday, saturday};

int main(){

    week today;
     today = friday;
     cout<<"day: "<<today+2<<endl;

    return 0;
}