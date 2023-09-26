// printing factorial number using function
#include <iostream>  
using namespace std; 
int factorial(int n) //declearing function
{
    if (n>0)
    {
      return n*factorial(n-1);     //condition for factorial
    }
    else{
        
      return 1;
    }
}
int main()
{
    int n;
    cout<<"Enter the number= ";
    cin>>n;              //calling function in main
    cout<<"factorial of "<<n<<"="<<factorial(n);
    return 0;
}