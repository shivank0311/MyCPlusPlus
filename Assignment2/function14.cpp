#include <iostream>
using namespace std;

void printFibonacciInRange(int range);

int main() {
    int n;
    cout << "Enter the range for the Fibonacci series: ";
    cin >> n;

    cout << "Fibonacci Series in the range 0 to " << n << ": ";
    printFibonacciInRange(n);

    return 0;
}
void printFibonacciInRange(int range) {
    int t1 = 0, t2 = 1, nextTerm = 0;

    while (t1 <= range) {
        cout << t1 << " ";
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    cout << endl;
}
