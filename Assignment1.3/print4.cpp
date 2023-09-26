#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value =";
    cin>>n;
    for(int i=0; i<=n ; i++)    //logic for expected output
    {
        int num;
        for(int j=1; j<=n-i; j++)   //logic to print 1st inverted traingle
        {
          cout<<"*";
        }
        for(int k=0;k<=2*i-1;k++)     //to print spaces
        {
            cout<<" ";
        }
        for (int j = n; j > i; j--) {      //to print mirror inverted traingle
           cout << "*";
        }

    cout<<endl;
    }
    return 0;
}