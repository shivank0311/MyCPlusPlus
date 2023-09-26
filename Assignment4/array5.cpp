#include <iostream>
using namespace std;

void input(int a[], int b[], int n);
void display(int a[], int b[], int c[], int n);

int main() {
    int n = 10;
    int a[n];
    int b[n];
    int c[2 * n];

    input(a, b, n);
    display(a, b, c, n);

    return 0;
}
void input(int a[], int b[], int n) {
    cout << "Enter " << n << " values for array a:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter value " << i << ": ";
        cin >> a[i];
    }

    cout << "Enter " << n << " values for array b:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Enter value " << i << ": ";
        cin >> b[i];
    }
}
void display(int a[], int b[], int c[], int n) {
    for (int i = 0; i < n; i++) {
        c[i] = a[i];
        c[i + n] = b[i];
    }
//append the value in string as given
    cout << "(First " << n << " elements of c (from array a)):" << endl;
    for (int i = 0; i < n; i++) {
        cout << c[i] << " ";
    }
    cout << endl;

    cout << "(Next " << n << " elements of c (from array b)):" << endl;
    for (int i = n; i < 2 * n; i++) {
        cout << c[i] << " ";
    }
    cout << endl;
}
