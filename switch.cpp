
#include <iostream>
using namespace std;

int main() {
    int day;
    cout<<"enter a number: ";
    cin>>day;

    switch(day%7){
        case 1:
            cout<<"MonDay"<<endl;
            break;
        case 2:
            cout<<"TuesDay"<<endl;
            break;
        case 3:
            cout<<"WednesDay"<<endl;
            break;
        case 4:
            cout<<"ThursDay"<<endl;
            break;
        case 5:
            cout<<"FriDay"<<endl;
            break;
        case 6:
            cout<<"SaturDay"<<endl;
            break;
        case 0:
            cout<<"SunDay"<<endl;
            break;
        default:
            cout<<"You enter wront data type"<<endl;
    }

    return 0;
}