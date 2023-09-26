//wap for printing multiplication table of number "2 X 1=2"
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=10; i++) {
    cout<< n<< "*" << i << "=" << n*i <<"\n";
    }
    return 0;
}
