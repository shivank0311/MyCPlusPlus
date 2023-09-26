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
        for(int k=1; k<=n-i; k++) //for spaces
        cout<<" ";
        for(int l=1; l<i ;l++) //for anothe * loop
        cout<<"*";
        for(int j=1; j<i; j++)
        cout<<"*";
    cout<<"*";
    cout<<endl;
    }
    return 0;
}