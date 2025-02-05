// This program prints the multiplication table of a given number using a for loop.
#include <iostream>
using namespace std;

int main() {
    int n = 5; // Change this value to get the multiplication table of a different number
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
    return 0;
}
