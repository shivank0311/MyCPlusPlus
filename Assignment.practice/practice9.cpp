#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int a[size];
    int b[size];
    int c[2 * size];

    // Input array 'a'
    cout << "Enter " << size << " integers for array 'a':" << endl;
    for (int i = 0; i < size; i++) {
        cin >> a[i];
    }

    // Input array 'b'
    cout << "Enter " << size << " integers for array 'b':" << endl;
    for (int i = 0; i < size; i++) {
        cin >> b[i];
    }

    // Append 'b' to 'a' to create 'c'
    for (int i = 0; i < size; i++) {
        c[i] = a[i];
        c[i + size] = b[i];
    }

    // Display array 'c'
    cout << "Array 'c' (appended 'b' to 'a'):" << endl;
    for (int i = 0; i < 2 * size; i++) {
        cout << c[i] << " ";
    }
    cout << endl;

    return 0;
}
