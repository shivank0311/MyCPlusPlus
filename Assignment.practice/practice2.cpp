#include <iostream>
using namespace std;

void input(int a[], int b[], int n);
void display(int c[], int n);

int main() {
    const int size = 10;
    int a[size];
    int b[size];
    int c[2 * size];

    input(a, b, size);
    display(c, size);

    return 0;
}

void input(int a[], int b[], int n) {
    cout << "Enter " << n << " values for array 'a':" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter value " << i << ": ";
        cin >> a[i];
    }

    cout << "Enter " << n << " values for array 'b':" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter value " << i << ": ";
        cin >> b[i];
    }
}

void display(int c[], int n) {
    for (int i = 0; i < n; i++) {
        c[i] = a[i];
        c[i + n] = b[i];
    }

    cout << "First 10 elements of c (from array a):" << endl;
    for (int i = 0; i < n; i++) {
        cout << c[i] << " ";
    }
    cout << endl;

    cout << "Next 10 elements of c (from array b):" << endl;
    for (int i = n; i < 2 * n; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
}