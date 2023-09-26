            //write a programme for calculation of area of traingle

#include <iostream>
using namespace std;

int main()
{
    int height,base;         //for traingle height and base taken
    float area;
    cout<<"Enter height =";
    cin>>height;
    cout<<"Enter base =";
    cin>>base;
    area = (height*base)/2;               //area of traingle
    cout<<"Area of traingle ="<<area<<"\n";
    
    return 0;
}