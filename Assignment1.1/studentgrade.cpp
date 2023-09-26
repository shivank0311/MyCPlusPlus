//calculate percentage of student
#include <iostream>
using namespace std;

int main()
{
    int percentage;    //student marks considered as perc
    cout<<"Enter percentage of student =";
    cin>>percentage;
    if(percentage >= 60)
    {
        cout<<"Grade = A"<<"\n";
    }
    else if (percentage>=50 && 60)
    {
        cout<<"Grade = B"<<"\n";
    }
    else if (percentage>=40 && 50){
        cout<<"Grade = C"<<"\n";
    }
    else if (percentage>=30 && 40)
    {
        cout<<"Grade = D"<<"\n";
    }
    else if (percentage>=20 && 30)
    {
        cout<<"Grade = E"<<"\n";
    }
    else 
    {
        cout<<"Fail"<<"\n";
    }
    return 0;
}