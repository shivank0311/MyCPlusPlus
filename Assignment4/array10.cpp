#include <iostream>
using namespace std;

int main()
{
    int i=10;
    int a[i];

    cout<<"Enter the array ="<<endl;
    cin>>a[i];
    
    int n;
    for (int i = 0; i < n; i++)
    {
      cout <<a[i]<<endl;
    }

    for (int i=0 ;i<n-1; i++)
    {
      for(int j=0; j<n-1-i;j++)
       { 
        if(a[i]< a[i])
        {
          int temp = a[i];
          a[i]=a[i+1];
          a[i+1]=temp;
        } 
       }
    }

     cout <<"Array after sorting ";
     for(int i=0 ; i<n ;i++)
     {
       cout << a[i] << " ";
     }
    cout << endl;

    return 0;
}
