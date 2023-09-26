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
        for(int j=0; j<=n-i-1; j++)
        {
        cout<<"*";
        }
        for(int k=1;k<2-n-i;k++)
        {
            cout<<" ";
        }
    cout<<endl;
    }
    return 0;
}