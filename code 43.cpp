// This program finds and prints the maximum element in an array using a for loop.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 7, 2, 9, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maxElement = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    cout << "Maximum element in the array is: " << maxElement << endl;
    return 0;
}
