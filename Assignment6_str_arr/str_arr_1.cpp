#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int maxlength = 20 ;
    char arr[maxlength];
    
    cout<<"Enter length of String"<<endl;
    cin.getline(arr, maxlength);

    int length = strlen(arr);
    cout<<"length of array "<<length<<endl;
    return 0;
}