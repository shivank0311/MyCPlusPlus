#include <iostream>  
using namespace std;  

int recursive(int num) //declaration of recursive function
{
    if (num == 0)
    {
        return 0; // Base case: if num is 0, return 0
    }
    else
    {
        int lastDigit = num % 10;
        int remainingDigits = num / 10;
        return lastDigit + recursive(remainingDigits); // Recursively calculate the sum
    }
}

int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    
    int sum = recursive(num);
    
    cout << "Sum of the digits: " << sum << endl;
    
    return 0;
}

