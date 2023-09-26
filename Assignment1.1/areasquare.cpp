            //write a programme for calculation of  square

#include <iostream>
using namespace std;

int main()
{
    int side1, side2;         //for square length and bradth taken
    float area;
    cout<<"Enter side =";
    cin>>side1;
    cout<<"Enter side =";
    cin>>side2;
    if(side1==side2){
    area = side1*side2;               //area of square
    cout<<"Area of square ="<<area<<"\n";
    }
    else{
        cout<<"wrong selection";
    }
    return 0;
}