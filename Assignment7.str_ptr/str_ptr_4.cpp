#include <iostream>
#include <cstring>
using namespace std;

int main() 
{
    char str1[40];
    char str2[40];

    cout<<"Enter the first string "<< endl;
    cin.getline(str1,sizeof(str1));

    cout<<"Enter the second string "<<endl;
    cin.getline(str2,sizeof(str2));

    int str1length= strlen(str1);

    char *ptr1 = str1 + str1length;
    char *ptr2 = str2 ;

    while (*ptr2) 
    {
        *ptr1 = *ptr2;
        ptr1++;
        ptr2++;
    }   
    *ptr1 != '\0';
    cout<<"Concated String "<<*ptr1<<endl;

    return 0;
}    

    
