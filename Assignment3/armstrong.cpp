#include <iostream>
using namespace std;

int CheckArmstrong(int num)
{
  if (num==0)
    return 1;
    return (num%10)*(num%10)*(num%10) + CheckArmstrong(num/10) ;
  }
  int main()
  {
    if (res == num)
    {
        cout << num << " is an Armstrong number.";
    }
    else{
        cout << num << " is not an Armstrong number.";
    }

    return 0;
  }