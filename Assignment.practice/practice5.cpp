#include<iostream>
 using namespace std; 
 int main()
  {    int size,i,j,k,l,ch=65;    
  cout<<"Enter the size "; 
   cin>>size;                              
   for(i=0;i<size;i++)               
    //loop for number of rows 
   {     
      for(j=size;j>i;j--) 
       { 
           cout<<char(ch);    
                   ch++;        }  
                         ch--;     
                           for(j=1;j<=i;j++)      
                               cout<<" ";      
                                for(k=2;k<=i;k++)     
                                    cout<<" ";      
                                     for(j=size;j>i;j--) 
     {    
        if( j==size-1 && i==0)           
          //for leaving ch in first line         continue; 
        cout<<char(ch); 
        ch--; 
     } 
     cout<<endl;    
       ch=65; 
   }    return 0; 
} 
