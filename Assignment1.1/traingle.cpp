//write code for three sides of traingle and check which traingle is this
#include<iostream>
using namespace std;

int main(){
    //write code for traingle formation
    int side1,side2,side3;
    cout<<'Input value of side1:';
    cin>>side1;
    cout<<'Input value of side2';
    cin>>side2;
    cout<<'Input value of side3';
    cin>>side3;
    if (side1<side2||side2<side3||side3<side1)
    {
        cout<<'\n'<<'traingle not formed';
    }
    else if(side1==side2||side2==side3){
       cout << "traingle is equilateral";
    }
    else (side1>side2||side2>side3||side3>side1)
    {
        cout<<'\n''traingle is formed';
    }
    return 0;
}