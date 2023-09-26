#include <iostream>  
using namespace std;  
int recursive(int num,int sum) //decleration of recursive function
{
    if (num>0)
    {
        int n;           //condition for recursive function
        sum=sum + n%10;
        n=n/10;
    }
    return sum;
}
int main()
{
    int num ;               //calling function in main 
    recursive(num,0);
    cout<<"Enter the number"<<endl;
    cin>>num;
    cout<<"sum of the digits "<<recursive<<endl;
    return 0;
}