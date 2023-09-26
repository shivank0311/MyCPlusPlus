#include <iostream>  
using namespace std;

int reverseNumber(int n,int rev);//decleration for printing number
int main()  
{
    int n,rev=0;
    cout<<"enter number =";
    cin>>n;

    int result=reverseNumber(n,rev);

    return 0;
}
int reverseNumber(int n,int rev) 
{
    while(n!=0)
    {
        int last_digit= n%10;    
        rev=rev*10 +last_digit; //for execution of reverse order
        n=n/10;  //to remove last digit
    }
    cout<<"reverse of the digits ="<<rev<<endl;
    return 0;
}