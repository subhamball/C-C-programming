#include <iostream>
using namespace std;

int add_numbers(int x, int y) {
    return x + y;
}

int main() {
    // Calling the function and storing the result
    int result = add_numbers(3, 4);
    cout << result << endl;
    return 0;
}
