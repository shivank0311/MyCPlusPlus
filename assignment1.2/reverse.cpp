//write a prog to print number in reverse order
#include <iostream>  
using namespace std;  
int main()  
{
    int n,rev=0;
    cout<<"enter number =";
    cin>>n;
    while(n!=0)
    {
        int last_digit= n%10;    
        rev=rev*10 +last_digit; //for execution of reverse order
        n=n/10;  //to remove last digit
    }
    cout<<"reverse of the digits ="<<rev<<endl;
    return 0;
}