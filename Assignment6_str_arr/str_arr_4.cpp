#include <iostream>
using namespace std;

int main()
{
    char str[30];
    char ptr[20];
    char strcat(ptr,str);

    cout<<"Enter value of string "<<endl;
    gets(str);
    gets(ptr);
   
    strcat(ptr,str); 

    cout<<"string output "<<endl;
    puts(ptr);
    cout<<"enter length of "<<strcat(str)<<endl;

    return 0;
}