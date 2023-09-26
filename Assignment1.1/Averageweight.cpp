#include <iostream>
using namespace std;

int main()
{
    float w1,w2,n1,n2,avg;
    cout<<"enter weight item1 =";
    cin>>w1;
    cout<<"Enter no of item1 =";
    cin>>n1;
    cout<<"enter weight of item2 =";
    cin>>w2;
    cout<<"enter no of item2 =";
    cin>>n2;
    avg =((w1*n1)+(w2*n2))/(n1+n2);
    cout<<"average value"<<avg<<"\n";
    return 0;
}