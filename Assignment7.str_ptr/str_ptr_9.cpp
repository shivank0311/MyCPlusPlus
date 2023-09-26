#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

void toLowerCase(char *str);//function decleration
int main()
{
    char str[100];
    cout<<"Enter the string"<<endl;

    cin.getline(str,sizeof(str));

    toLowerCase(str);
    cout<<"Lower Case string "<<str<<endl; //print output of the string
    return 0;
}
void toLowerCase(char *str)
{                          //condition for lower case
     while(*str)
     {
        *str = tolower(*str);
        str++;
     }
}