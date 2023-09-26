#include <iostream>
#include <string>
using namespace std;

int main()
{
    string inputString,reverseString;
    cout<<"Enter the string"<<endl;

    getline(cin ,inputString);

    int length = inputString.length();

    for (int i=length-1; i>=0 ; --i)
    {
        reverseString += inputString[i];
    }
    cout<<"reverse string "<<reverseString<<endl;
    return 0;
}