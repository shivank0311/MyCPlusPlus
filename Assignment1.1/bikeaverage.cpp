//calculate average speed of bike
#include <iostream>
using namespace std;

int main()
{
    int dist,fuel,avg;    //distance and fuel is considered
    cout<<"Total distance covered in km =";
    cin>>dist;
    cout<<"Total fuel consumption in ltr =";
    cin>>fuel;
    avg =dist/fuel;   //for calculation of average in case of bike
    cout<<"average value"<<avg<<"\n";
    return 0;
}