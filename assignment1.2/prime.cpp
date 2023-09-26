#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number"<<endl;
    cin>>n;

    for(int i=1; i<=n ;i++)
    {
     if(i%n==0){
        cout<<"number is not prime";
     }
     else 
     {
        cout<<"number is prime";
      }
       cout<<i<<endl;
    }
   
    return 0;
}