#include<iostream>
#include<iomanip>
using namespace std;
int main()
    {
       short int n,i,j,s;
        cin>>n;
        for(i=1;i<=n;i++)
        {
          for(s=1;s<=n-i;s++)
          {
            cout<<" ";
          }
              for(j=1;j<=i;j++)
              {
                  cout<<j<<" ";
              }
              for(j=i-1;j>=1;j--)
              {
                  cout<<j<<" ";
              }

          cout<<endl;

        }
        return 0;


    }
