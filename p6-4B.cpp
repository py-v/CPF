#include<iostream>
#include<iomanip>
using namespace std;
int main()
    {
        short int i,j,k;
        int a1[5],a2[5],a3[10],temp;

        cout<<"*************************"<<endl;
        cout<<"   MERGE SORTED SRRAYS   "<<endl;
        cout<<"*************************"<<endl;
        cout<<endl;
        cout<<"First Array "<<endl;

        for( i=0 ; i<5 ; i++)
            {
                cin>>a1[i];
            }

        for(i=0 ; i<5 ; i++)
            {
                cout<<a1[i];
            }

        cout<<endl<<endl<<"Second Array "<<endl;

        for( i=0 ; i<5 ; i++)
            {
                cin>>a2[i];
            }

        for(i=0 ; i<5 ; i++)
            {
                cout<<a2[i];
            }

        for(i=0,j=0 ,k=0 ; i<5 , j<5 , k<10 ;i++ , j++ , k++)
            {
               if(a1[i]>a2[j])
               {
                  a3[k]=a2[j];
                  k++;
                  a3[k]=a1[i];

               } 
               else
               {
                a3[k]=a1[i];
                k++;
                a3[k]=a2[j];
               }
            }

            cout<<endl<<endl;
            
        for(i=0 ; i<10 ; i++)
            {
                cout<<" "<<a3[i];
            }

    } 