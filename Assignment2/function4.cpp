//wap for adding  natural number upto 20
#include <iostream>
using namespace std;
int printNumber(int sum);

int main()
{
   int n ;
   int sum= printNumber(0);
   cout<<"the sum of number"<<sum<<endl; 
    return 0;
}
int printNumber(int sum)
{

    for(int i=1; i<=20; i++)
    {
        sum= sum + i;
    }
    cout<<sum<<endl;
}
