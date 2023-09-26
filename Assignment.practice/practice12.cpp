#include <iostream>
using namespace std;

int recursivefib(int n)
{
    if (n <= 1) {
        return n; // Base cases: F(0) = 0, F(1) = 1
    } else {
        // Recursively calculate F(n) by summing the previous two Fibonacci numbers
        return recursivefib(n - 1) + recursivefib(n - 2);
    }
}

void printFibonacciInRange(int start, int end)
{
    for (int i = start; i <= end; i++) {
        cout << recursivefib(i) << " ";
    }
    cout << endl;
}

int main()
{
    int start, end;
    cout << "Enter the range (start and end): ";
    cin >> start >> end;
    
    if (start < 0 || end < 0 || start > end) {
        cout << "Invalid range." << endl;
        return 1;
    }
    
    cout << "Fibonacci series in the range [" << start << ", " << end << "]: ";
    printFibonacciInRange(start, end);
    
    return 0;
}
