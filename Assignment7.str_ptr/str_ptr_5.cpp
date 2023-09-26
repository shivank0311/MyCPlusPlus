#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char firststring[50];
    char secondstring[50];

    cout<<"Enter the first string "<<endl;
    cin.getline(firststring, sizeof(firststring));

    cout<<"Enter the second string "<<endl;
    cin.getline(secondstring , sizeof(secondstring));

    int firststringLength =strlen(firststring);
    //assigning value to pointer
    char *firstptr = firststring ;
    char *secondptr = secondstring;
    
    int flag=0;  //used to return value if condition become true
   for(; *firstptr==*secondptr; firstptr++,secondptr++)
   {
   if (*firstptr != '\0')  //
     flag =1;
   }
   if (flag){
     cout<<"Strings are same ";  //condition for same string
   }
   else{          //condition for printing differ value
    cout<<"strings are differ by "<<*firstptr-*secondptr;
   }
   
   return 0;
}