#include <iostream>
using namespace std;

void input (int arr[] , int n);
void sortarr(int arr[], int n);

int main()
{
    int i=10;
    int arr[10];

    input (arr,i);
    sortarr(arr,i);

    return 0;
}
void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the value: ";
        cin >> arr[i];
    }
}
void sortarr(int arr[] ,int n )
{
    for (int i=0 ;i<n-1; i++)
    { 
       for (int j=0; j<n-1-i;j++)
       {
          if(arr[j]< arr[j+1])
            {
             int temp = arr[j];
             arr[j]=arr[j+1];
             arr[j+1]=temp;
            }
        }
    }
     cout <<"Array in Descending order ";
     for(int i=0 ; i<n ;i++)
     {
       cout << arr[i] << " ";
     }
    cout << endl;
}