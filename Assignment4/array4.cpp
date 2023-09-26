#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int arr[size];

    // Input the array of 10 integers
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int isGrowing = true;
    int isDecreasing = true;
    // Check if the array is growing or decreasing
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[i - 1]) {
            isDecreasing = false;
        } else if (arr[i] < arr[i - 1]) {
            isGrowing = false;
        }
    }
    if (isGrowing && isDecreasing) {
        cout << "The array is growing and decreasing." << endl;
    } else if (isGrowing) {
        cout << "The array is growing." << endl;
    } else if (isDecreasing) {
        cout << "The array is decreasing." << endl;
    } else {
        cout << "The array is constant." << endl;
    }

    return 0;
}
