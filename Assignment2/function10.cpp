#include <iostream>
using namespace std;

int primeNumber(int n);
int main()
{
    int m;
    cout<<"Enter the number "<<endl;
    cin>>m;

     if(primeNumber(m)){
        cout<<m<<" number is prime "<<endl;
     }
     else 
     {
        cout<<m<<" number is not prime "<<endl;
     }  
    return 0;
}
int primeNumber(int n)
{
    for(int i=1; i<=n ;i++)
    {
       if(n%i<=1){        // 0 and 1 are not prime numbers
        return false;
     }
     for(i=2 ; i*i<=n; i++)
     {
      if(n%i==0){
        return false;     // If n is divisible by any number from 2 to sqrt(n), it's not prime
      }
     }
    }
    return true;   // If no divisors were found, n is prime
     
}    