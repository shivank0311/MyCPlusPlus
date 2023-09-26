#include <iostream>
using namespace std;

int isArmstrong(int n);
int main() 
{
    int n,res;
    cout << "Enter a three-digit integer: ";
    cin >> n;
    
    if (isArmstrong(n)){
        cout << n << " is an Armstrong number."<<endl;
    }  
    else{
        cout << n<< " is not an Armstrong number."<<endl;
    }

    return 0;

}
int isArmstrong(int n) 
{   
   int originalNumber, remainder, result = 0;

    originalNumber = n;

    while (originalNumber != 0)
    {     //condition for armstrong number
        remainder = originalNumber % 10;
        result += remainder * remainder * remainder;
        originalNumber /= 10;
    }

    // If n is equal to the result, it's an Armstrong number
    return n==result;
}