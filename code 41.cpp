// This program prints all the elements of an array using a for loop.
#include <iostream>
using namespace std;
int main() {
	
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
