#include <iostream>
#include <cstring>
using namespace std;

int ispalindrone(const char *str);
int main()
{
    char str[20];
    
    cout<<" Enter the value string: "<<endl;
    cin.getline(str,sizeof(str));

    if (ispalindrone(str))
    {
        cout<<"This string is pallindrone "<<endl;
    }
    else{
        cout<<"This string is not pallindrone "<<endl;
    }

    return 0;

}
int ispalindrone(const char *str) //declearing function for palindrone
{
    int length=strlen(str);
    const char *start=str;         //declearing pointers
    const char *end=str + length-1;

    while(start<end)
    {                    //condition for processing the loop
        if (*start!=*end)
        {
          return false;
        }
        start++;
        end--;
    }
    return true;
}