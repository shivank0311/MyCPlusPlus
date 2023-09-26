#include <iostream>
using namespace std;

int stringlength(char []); //decleration of function
int main()
{
    char str[20];
    char ptr[20];

    cout<<"Enter the Value "<<endl;
    cin.getline(str,30);
    cout<<"length of string "<<stringlength(str)<<endl;
    
    return 0;
}
int stringlength(char s[])  //condition for string length
{
    int i=0;
    int count=0;
    while (s[i]!='\0')  
    {
        count++; //for moving pointer
        i++;
    }
   return count;
}