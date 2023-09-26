//wap for adding  natural number upto 20
#include <iostream>
using namespace std;
int printOddNumber(int sum);

int main()
{
   int n ;
   int sum=printOddNumber(0);
   cout<<"the sum of number"<<sum<<endl; 
    return 0;
}
int printOddNumber(int sum)
{

    for(int i=1; i<=20; i++)
    {
        if (i%2==1){
        sum= sum + i;
        }
    }
    cout<<sum<<endl;
}