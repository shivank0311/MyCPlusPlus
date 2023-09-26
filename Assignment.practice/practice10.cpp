#include <iostream>
using namespace std;

int main() {
    int n = 10; // Size of the array
    int a[n];

    // Input the array elements
    cout << "Enter " << n << " integers for the array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    // Printing sorted array
    cout << "Array after sorting: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
