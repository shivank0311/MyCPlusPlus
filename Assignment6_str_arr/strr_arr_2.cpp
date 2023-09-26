#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    int maxlength1 = 10;
    int maxlength2 = 20;

    char arr1[maxlength1];
    char arr2[maxlength2];

    cout<<"Enter the Value "<<endl;
    cin.getline(arr1,maxlength1);
    cout<<"Enter the second string "<<endl;
    cin.getline(arr2,maxlength2);

    int length1= strlen(arr1);
    int length2= strlen(arr2);

    cout<<arr2<<" "<<length2<<"  "<<arr1<<" "<<length1<<endl;

    return 0;
}