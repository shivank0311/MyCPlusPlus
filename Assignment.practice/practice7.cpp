#include <iostream>
using namespace std;

int isPrime(int n);
int main()
{
    int m;
    cout << "Enter a number: ";
    cin >> m;

    if (isPrime(m))
    {
        cout << m << " is a prime number." << endl;
    }
    else
    {
        cout << m << " is not a prime number." << endl;
    }
    return 0;
}
int isPrime(int n)
{
    if (n <= 1)
    {
        return false; // 0 and 1 are not prime numbers
    }

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false; // If n is divisible by any number from 2 to sqrt(n), it's not prime
        }
    }

    return true; // If no divisors were found, n is prime
}
