#include <iostream>
using namespace std;

int recursive(int num, int sum)
{
    if(num>0)
    {
       int r= num%10;
       sum = sum*10 + r;
       sum = recursive(num/10,sum);
    }
    return sum;
}
int main()
{ 
    int num;
    cout<<"enter the interger "<<endl;
    cin>>num;

   int reverse=recursive (num , 0);
   cout<<"Reverse digit "<<reverse<<endl;
   return 0;
}