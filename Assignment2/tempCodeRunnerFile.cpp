#include <iostream>
using namespace std;
void printEvenNumbers(int n){
  void pprintEvenNumbers();
    for (int i=0; i<=n; i++){
        if(i%2==0){
        cout<<i;
        }
    }
  cout<<endl;
}
  int main()
  {
    int n = 20 ;
    printEvenNumbers(n);
    return 0;
  }