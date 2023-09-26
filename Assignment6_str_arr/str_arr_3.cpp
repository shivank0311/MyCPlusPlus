#include <iostream>
using namespace std;

int countwords(char s[]);
int main()
{
    int maxlength=20;
    int arr[maxlength];

    cout<<"Enter the Value "<<endl;

    cin.getline(arr, maxlength);
    
    int count=strlen(arr);
    cout<<"count no of words "<<count<<endl;
    
    return 0;
}
int countwords(char s[])
{
    int i=0;
    int count=0;
    if (s[i]!='\0')
    {
        if(s[i]==' ')
    
          count++;
          i++;
          
    }
   return count;
}