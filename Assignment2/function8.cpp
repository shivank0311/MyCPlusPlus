//wap for multiplication natural number upto 20
#include <iostream>
using namespace std;
int printmultiple(int n);

int main()
{
   int m ;
   cout<<"Enter the number ="<<endl;
    cin>>m;

   printmultiple(m);
 
   return 0;
}
int printmultiple(int n)
{
    
    for(int i=1; i<=10; i++)
    {
     cout<<n<<"X"<<i<<"="<<n*i<<endl;  //condition for printing in multiplication form
    }
    cout<<n<<endl;
}