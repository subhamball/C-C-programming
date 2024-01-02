#include <iostream>
using namespace std;

void print_sum(int a, int b) {
    int total = a + b;
    cout << "The sum of " << a << " and " << b << " is " << total << endl;
}

int main() {
    // Calling the function
    print_sum(5, 7);
    return 0;
}
