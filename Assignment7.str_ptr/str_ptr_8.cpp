#include <iostream>
#include <cstring>
using namespace std;

void reverseString( char *str);//function decleration
int main()
{
    char str[100];
    cout<<"Enter the string"<<endl;

    cin.getline(str,sizeof(str));

    reverseString(str);
    cout<<"reverse string "<<str<<endl; //print output of the string
    return 0;
}
void reverseString( char *str)
{
      int length= strlen(str);     
       char *start = str;
       char *end = str + length -1;

      while (start<end)       //condition for printing reverse string
      {
        char temp = *start;
        *start = *end;
        *end = temp;
//move pointer towards each other
        start++;
        end--;

      }

}