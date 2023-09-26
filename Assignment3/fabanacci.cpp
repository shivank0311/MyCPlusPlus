#include <iostream>
using namespace std;

int recursivefib(int n)
{
  if((n==0)){
    return n;
  }
  else
  {
    return recursivefib((n-1)+(n-2));
  }
}
int main()
{
    int n=20;
    cout<< recursivefib(n);
    return 0;
}
