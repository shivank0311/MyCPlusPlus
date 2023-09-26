#include <iostream>  
using namespace std; 

int digitSum(int n,int sum); //decleration for digit sum

int main()  
{
    int n,sum;
    cout<<"enter number =";
    cin>>n;
    int result= digitSum(n,0);

    cout<<"sum of digit "<<result<<endl;
    return 0;
}
int digitSum(int n,int sum)
{       
    while(n!=0)
    {                //codition for printing sum of digit
        sum=sum + n%10;
        n=n/10;
    }
    cout<<sum<<endl;
}