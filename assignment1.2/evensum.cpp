//wap for adding  natural number upto 20
#include <iostream>
using namespace std;

int main()
{
    int sum;

    for(int i=1; i<=20; i++)
    {
        if (i%2==0){
        sum= sum + i;
        }
        cout<<sum<<"\n";
    }
    return 0;
}