//wap for character printing
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value =";
    cin>>n;
    for(int i=0; i<=n ; i++)    //logic for expected output
    {
        int ch=65; //initialize char over here to print ABCD
        for(int j=0; j<n-i; j++)
        {
        cout<<(char)ch;     //condition for output
        ch++;
        }
    cout<<endl;
    }
    return 0;
}