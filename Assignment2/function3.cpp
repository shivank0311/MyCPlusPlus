#include <iostream>
using namespace std;
void printOddNumbers(int n){    //declaring function
  void printOddNumbers();
    for (int i=0; i<=n; i++){
        if(i%2==1){             //condition for odd number
        cout<<i<<endl;
        }
    }
  cout<<endl;
}
  int main()
  {
    int n = 20 ;
    printOddNumbers(n);
    return 0;
  }