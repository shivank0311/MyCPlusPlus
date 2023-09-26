#include <iostream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string inputString;
    cout<<"Enter the string"<<endl;

    getline(cin ,inputString);

    int length = inputString.length();

    for (int i=0; i <= length ; i++)
    {
        inputString[i]= toupper(inputString[i]);
    }
    cout<<"Upper alphabet string "<<inputString<<endl;
    return 0;
}