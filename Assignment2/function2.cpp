#include <iostream>
using namespace std;
void printEvenNumbers(int n){   // declaring function
  void pprintEvenNumbers();
    for (int i=0; i<=n; i++){
        if(i%2==0){            // condition for even number
        cout<<i<<endl;
        }
    }
  cout<<endl;
}
  int main()
  {
    int n = 20 ;
    printEvenNumbers(n);    //function calling in main
    return 0;
  }