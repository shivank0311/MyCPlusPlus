#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int arr[size];

    // Input array of 10 integers
    cout << "Enter " << size << " integers for the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int V, i;
    cout << "Enter the integer value (V): ";
    cin >> V;

    do {
        cout << "Enter the index value (between 0 and 9): ";
        cin >> i;
    } while (i < 0 || i >= size);

    // Shift elements to the right and insert V at index i
    for (int j = size - 1; j > i; j--) {
        arr[j] = arr[j - 1];
    }
    arr[i] = V;

    // Display the final array
    cout << "Array after insertion:" << endl;
    for (int k = 0; k < size; k++) {
        cout << arr[k] << " ";
    }
    cout << endl;

    return 0;
}
