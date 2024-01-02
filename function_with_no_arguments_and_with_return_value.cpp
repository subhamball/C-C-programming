#include <iostream>
using namespace std;

int get_constant() {
    return 85;
}

int main() {

    // Calling the function and storing the result
    int result = get_constant();
    cout << result << endl;
    
    return 0;
}
