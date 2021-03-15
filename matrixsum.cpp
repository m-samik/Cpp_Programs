#include <iostream>
using namespace std;

int main()
{
    int row,column,a[20][20],b[20][20],sum[20][20],i,j;
    cout<<"Enter the Number of Rows : "<<endl;
    cin>>row;
    cout<<"Enter the Number of Columns : "<<endl;
    cin>>column;
    
    cout << "Enter Element of Matrix A : "<<endl;
    for (i=0 ; i<row ; i++)
        for(j=0 ; j<column ; j++)
        {
            cout <<"Enter Element Number A"<<i<<j<<": ";
            cin>>a[i][j];
        }
    cout << "Enter Element of Matrix B : "<<endl;
    for (i=0 ; i<row ; i++)
        for(j=0 ; j<column ; j++)
        {
            cout <<"Enter Element Number B"<<i<<j<<": ";
            cin>>b[i][j];
        }
    for(i=0 ; i<row ; i++)
        for(j=0 ; j<column ; j++)
        {
            sum[i][j]=a[i][j] + b[i][j];
        }
    
    cout<< "Sum of Matrix A + B = " ;
    
    for(i=0 ; i<row ; i++)
        for(j=0 ; j<column ; j++)
        {
            cout<<sum[i][j]<<" ";
            if (j==column-1)
                cout<<endl;
            
        }
    
    return 0;
}
