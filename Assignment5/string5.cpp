#include <iostream>
#include <cstring>
using namespace std;

int comparision(const char str1[], const char str2[]);
int main()
{
    char str1[30];
    char str2[20];

    cout<<"Enter value of string 1 "<<endl;
    cin.getline(str1,sizeof(str1));

    cout<<"Enter value of string 2 "<<endl;
    cin.getline(str2, sizeof(str2));

    int result= comparision(str1,str2);

    if (result<0)
    {
        cout<<"String 1 is less than string 2"<<endl;
    }
    else if (result == 0)
    {
        cout<<"string 1 is equal to string 2"<<endl;
    }
    else
    {
        cout<<"string 1 is greater than string 2"<<endl;
    }
    return 0;
}        //comparision between string 1 and string 2
int comparision(const char str1[] , const char str2[])
{
    int i=0;
//condition for string printing
    while(str1[i]!='\0' && str2[i]!='\0')
    {
      if (str1[i]<str2[i])
      {
        return -1;
      }
      else if(str1[i]>str2[i])
      {
        return 1;
      }
      i++;
    }               //condition for stringlength
   if (strlen(str1) < strlen(str2)) 
   {
        return -1;
    } 
    else if (strlen(str1) > strlen(str2))
    {
        return 1;
    }
    return 0;   
}