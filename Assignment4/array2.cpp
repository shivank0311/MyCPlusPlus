#include <iostream>
using namespace std;

int main()
{
    const int i = 10; // Define the size of the array
    
    int arr[10]; // Declare an array of integers
    
    for (int i = 0; i < 10; i++)
    {
        cout << "Enter the value: ";
        cin >> arr[i];
    }
    
    cout << "Numbers greater than or equal to 10:" << endl;
    
    for (int j= 0; j < 10; j++)
    {
        if (arr[j]> 10)
        {
            cout << arr[j] << " is greater than or equal to 10 " <<" at index "<<j<< endl;
        }
    }
    
    return 0;
}