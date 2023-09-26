            //write a programme for calculation of gross salary

#include <iostream>
using namespace std;

int main()
{
    float unit,bill,totalbill,finalbill;
    cout<<"Enter unit charges =";
    cin>>unit;
    if(unit<=50){
        bill=.50;
        totalbill=unit*bill;
        cout<<"total electricity bill ="<<totalbill<<"\n";
    }
    else if(unit<=50 && 100){
        bill=.75;
        totalbill=unit*bill;
        cout<<"total electricity bill ="<<totalbill<<"\n";
    }
    else if(unit<=250 && 150){
        bill=1.20;
        totalbill=unit*bill;
        cout<<"total electricity bill ="<<totalbill<<"\n";
    }else if(unit>250){
        bill=1.50;
        totalbill=(unit*bill);
        finalbill=(totalbill+totalbill*.20);
        cout<<"total electricity bill ="<<finalbill<<"\n";
    }    
    else{
        cout<<"the bill is this";
    }

    return 0;
}