#include <iostream>
using namespace std;

int recursive(int num,int rev) //declearing function
{                   //declearing condition for palindrone no.
  if (num>0)
  {
    int r = num % 10;
         rev = (rev * 10) + r;
         rev = recursive(num/10,rev);
  }
   return rev;
  }
  int main()
  {
    int num;
    cout<<"Enter the number "<<endl;  
    cin>>num;
     
    int rev= recursive(num,0);  //callinf function in main
    if (rev==num){
        cout<<"This number is pallindrome";
    }
    else{
        cout<<"This number is not pallindrome";
    }
  }