#include <iostream>
using namespace std;

int main()
{
    int rows,col;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> col;

    int m1[rows][col];
    int m2[rows][col];
 
   int sum[rows][col];

   cout<< "Enter elements for matrix1 "<<endl;
   for (int i=0; i<rows; i++)
   {
     for (int j=0; j<col ; j++)
     {
        cout<<"enter value of rows "<<i+1<<"enter value of column "<<j+1<<" ";
        cin>>m1[i][j];
     }
   }
    cout<< "Enter elements for matrix2 "<<endl;
   for (int i=0; i<rows; i++)
   {
     for (int j=0; j<col; j++)
     {
        cout<<"enter value of rows "<<i+1<< " enter value of column "<<j+1<<" ";
        cin>>m2[i][j];
     }
   }
   for (int i=0;i<rows;i++)
   {
     for (int j=0;j<col;j++)
     {
        sum[i][j] = m1[i][j]+m2[i][j] ;
     }
   }
   cout<<"Result of both matrix"<<" ";
    for (int i=0; i<rows; i++)
   {
     for (int j=0; j<col;j++)
     {
        cout<<  sum [i][j] << " ";
     }
     cout<<endl;
   }
   return 0;   
}