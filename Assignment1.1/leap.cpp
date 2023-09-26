//write programme for leap year
#include <iostream>
using namespace std;

int main()
{
    int year;
    cout<<"Enter the year=";
    cin>>year;
    //if whole year is complete divisible by 400
    if (year % 400==0)
    {
      cout<<"This year is leap year"<<year<<"\n";
    }
    else if (year % 100==0)  //if year is complete divisible by 100
    {
        cout<<"This year is not leap year"<<year<<"\n";
    }
    else if (year % 4==0)
    {
        cout<<"this year is leap year"<<year<<"\n";
    }
    else{
        cout<<"This year is not leap year"<<year<<"\n";
    }
    return 0;
}