#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    short int i=3 , j=3 , k;
    int a[3][3] ,b[3][3] ,m[3][3]={0};

    cout<<"Enter the value in Matrix : "<<endl;
    for( i=0 ; i<3 ; i++ )
    {
        for( j=0 ; j<3 ; j++)
        {
            cin>>a[i][j];

        }
    }
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            cout<<" "<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl<<endl;
    cout<<"Enter the value in Matrix : ";
    for( i=0 ; i<3 ; i++ )
    {
        for( j=0 ; j<3 ; j++)
        {
            cin>>b[i][j];

        }
    }
    for(i=0 ; i<3 ; i++)
    {
        for(j=0 ; j<3 ; j++)
        {
            cout<<" "<<b[i][j]<<" ";
        }
        cout<<endl;
    }

    for(i=0 ; i<3 ; i++)
    {
        for(k=0 ; k<3 ; k++)
        {
            m[i][k]=0;
            for(j=0 ; j<3 ; j++)
            {
               m[i][k]=m[i][j]+ (a[i][j]*b[j][k]);
            }
        }
    }

    for(i=0 ; i<3 ;i++)
    {
        for(k=0 ; k<3 ; k++)
        {
            cout<<m[i][k]<<" ";
        }
        cout<<endl;
    }
   
}