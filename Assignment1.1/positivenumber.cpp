#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"enter number";
    cin>>x;
    if (x>0){
        cout<<"number is positive "<<"\n";
    }
    else if (x%2==0){
        cout<<"number is even ";
    }
    else if(x%2==1){
      cout<<"number is odd";   
    }
    else if (x<0)
     {
        cout<<"number is negative";
    }
    else if(x==0){
        cout<<"number is zero";
    }
    return 0;
}