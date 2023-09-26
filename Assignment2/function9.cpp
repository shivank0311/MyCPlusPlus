//wap for factorial upto 20
#include <iostream>
using namespace std;
int factorial(int n);   //decleration for factorial

int main()
{
   int m ;
   cout<<"Enter the number ="<<endl;
    cin>>m;

   factorial(m);
 
   return 0;
}
int factorial(int n)    
{
    int sum=1;
    for(int i=n; i>0; i--)   //condition for facctorial
    {
     sum=sum*i;
    }
    cout<<sum<<endl;
}