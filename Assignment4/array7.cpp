#include <iostream>
using namespace std;

int main(int argc, char*argv[])
{
    // argc is the count of command line arguments
    // argv store address of arguments
    cout <<"enter the command line argument "<<argc<<endl;
    cin>>argc;

    for(int i=0; i<argc ; i++)
    {
        cout<<"argument"<<i<<argv[i]<<endl;
    }
    return 0;
}