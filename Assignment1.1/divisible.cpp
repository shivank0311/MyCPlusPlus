            //write a programme for any number divisible by 5

#include <iostream>
using namespace std;

int main()
{
    int n;         //for n is any integer
    float cal;
    cout<<"Enter any number =";
    cin>>n;
    if (n%5==0){
        cout<<"number is divisible by 5"<<"\n";
    }
    else{
        cout<<"number is not divisible by 5";
    }
    return 0;
}