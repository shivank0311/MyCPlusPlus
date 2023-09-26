#include <iostream>
using namespace std;

int main() {
    const int size = 10; // Define the size of the array
    int arr[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter the value: ";
        cin >> arr[i];
    }

    cout << "Numbers greater than or equal to 10:" << endl;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 10) {
            cout << arr[i] << " is greater than or equal to 10" << endl;
        }
    }

    return 0;
}


