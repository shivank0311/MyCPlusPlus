#include <iostream>
using namespace std;

void printReverseNumber();
int main()
{
    int n;
    cout<<"enter number =";
    cin>>n;
   
   printReverseNumber();
    return 0;
    
}
void printReverseNumber()
{
for(int i=20; i>0; i--)
    {
    cout <<"print reverse natural number ="<<i<<"\n";
    }
}        