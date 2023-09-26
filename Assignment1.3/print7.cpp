

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value =";
    cin>>n;
    for(int i=1; i<n ; i++)    //logic for expected output
    {
        int ch=65;
        for(int j=1; j<n-i; j++)
        {
          cout<<(char)ch;
          ch++;
        }
        for(int k=0;k<=2*i-1;k++)
        {
            cout<<" ";
        }
        ch--;
        for (int j = n; j >= i; j--) {
          ch--;
          cout << (char)ch;
           
        }
        
    cout<<endl;
    }
    return 0;
}
