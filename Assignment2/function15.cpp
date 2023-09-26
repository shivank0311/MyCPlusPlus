#include <iostream>
using namespace std;

int isPalindrome(int n); // Function decleration
int main()
{
    int num;
    cout << "Enter a positive number: ";
    cin >> num;

    if (isPalindrome(num))
    {
        cout << "The number is a palindrome." << endl;
    }
    else
    {
        cout << "The number is not a palindrome." << endl;
    }

    return 0;
}

int isPalindrome(int n)
{
    int originalNum = n;
    int reversedNum = 0;

    while (n > 0)
    {
        int digit = n % 10;
        reversedNum = (reversedNum * 10) + digit;
        n /= 10;
    }
   // Check if the original number is equal to its reverse
    return originalNum == reversedNum;
}