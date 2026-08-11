#include<iostream>
#include<iomanip>
using namespace std;
int main()
    {

        char i,j,n;


        cin>>n;
        for(i=97;i<=n+1;i++)
        {
            for(j=97;j<=i;j++)
            {
                cout<<j;


            }
            cout<<endl;

        }
        return 0;
    }




