#include <iostream>
#include <cstring>
#include <cctype>  //include for upper type
using namespace std;

void toUpperCase(char *str);//function decleration
int main()
{
    char str[100];
    cout<<"Enter the string"<<endl;

    cin.getline(str,sizeof(str));

    toUpperCase(str);
    
    cout<<"Upper Case string "<<str<<endl; //print output of the string
    return 0;
}
void toUpperCase(char *str)
{
     while(*str)
     {
        *str = toupper(*str);
        str++;
     }
}