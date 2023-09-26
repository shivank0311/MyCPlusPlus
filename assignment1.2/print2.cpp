//wap to print * in pattern
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value =";
    cin>>n;
    for(int i=1; i<=n ; i++)    //logic for expected output
    {
        for(int k=i; k<=n-1; k++)
        cout<<" ";
        for(int j=1; j<i; j++)
        cout<<"*";
    cout<<"*";
    cout<<endl;
    }
    return 0;
}