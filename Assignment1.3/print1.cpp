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
        for(int k=1; k<i;k++)
        cout<<"*";
    cout<<"*";
    cout<<endl;
    }
    return 0;
}