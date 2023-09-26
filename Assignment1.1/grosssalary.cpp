            //write a programme for calculation of gross salary

#include <iostream>
using namespace std;

int main()
{
    float Bsal,Hra,Da,Grosssalary;
    cout<<"Enter amount of employee =";
    cin>>Bsal;
    if(Bsal<=10000){
        Hra=Bsal*.20;
        Da=Bsal*.80;
        Grosssalary=Bsal+Hra+Da;
        Cout<<"Gross salary ="<<Grosssalary"\n";
    }
    else if (Bsal<=20000){
        Hra=Bsal*.25;
        Da=Bsal*.90;
        Grosssalary=Bsal+Hra+Da;
        Cout<<"Gross salary ="<<Grosssalary"\n";
    }
    else if (Bsal>20000){
        Hra=Bsal*.30;
        Da=Bsal*.95;
        Grosssalary=Bsal+Hra+Da;
        Cout<<"Gross salary ="<<Grosssalary"\n";
    }
    else{
        cout<<"Employee needs hike";
    }
    return 0;
}