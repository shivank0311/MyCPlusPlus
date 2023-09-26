//input radius value and get output of sphere
#include <iostream>   //this is used for mathmatical calculation
using namespace std;
int main(){
    //write code here

    int rad;   //dec radius
    float volsp;
    cout<<"enter radius";
    cin>>rad;
    cout<<"\n"<<" take volume of sphere" ; 
    cout<<"\n"<<"input the rad of sphere ";
    volsp=(4*3.147*rad*rad*rad)/3;   // formula for the volume of sphere
    cout<<"\n"<<" the volume of sphere "<<volsp;
    return 0;
}