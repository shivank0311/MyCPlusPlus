#include <iostream>
using namespace std;

int CalculateArmstrongSum(int num)
{
    if (num == 0) {
        return 0;
    } else {
        int digit = num % 10;
        return (digit * digit * digit) + CalculateArmstrongSum(num / 10);
    }
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int sumOfCubes = CalculateArmstrongSum(num);

    if (sumOfCubes == num) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
