#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int f,j,temp,te;
    int n,i;
    string id,name,sid,tem;

    cout<<"**************************************"<<endl;
    cout<<"   SPORTS EVENT SCORE ANALYSIS  "<<endl;
    cout<<"**************************************"<<endl;
    cout<<endl;
    cout<<"Enter number of participants:";
    cin>>n;

    cout<<endl;
    cout<<endl;

    string ids[n];
    string na[n];
    int s[n];

    for(i=0;i<n;i++)
    {
        cout<<"Enter Participinat ID :";
        cin>>ids[i];
        cout<<"Enter Participinat Name :";
        cin>>na[i];
        cout<<"Enter score :";
        cin>>s[i];
    }

     cout<<"****************************************"<<endl;
     cout<<"     SPORTS EVENT SCORE ANALYSIS   "<<endl;
     cout<<"****************************************"<<endl;

     cout<<"Search Participant"<<endl;
    M: cout<<"Enter Participant ID:";
     cin>>sid;
     f=0;

     for(i=0;i<n;i++)
     {
         if(ids[i]==sid)
         {
             cout<<"------------------------"<<endl;
             cout<<"   Participant  Found   "<<endl;
             cout<<"------------------------"<<endl;
             cout<<"ID"<<setw(8)<<":";
             cout<<ids[i]<<endl;
             cout<<"Name"<<setw(6)<<":";
             cout<<na[i]<<endl;
             cout<<"Score"<<setw(5)<<":";
             cout<<s[i]<<endl;
             f=1;
             break;
         }
     }
     if(f==0)
     {
         cout<<"this id does not exist"<<endl;
         goto M;
     }
     cout<<"--------------------------"<<endl;
     cout<<"       Ranking List    "<<endl;
     cout<<"--------------------------"<<endl;
     cout<<endl;
     cout<<left<<setw(5)<<"Rank"
         <<left<<setw(15)<<"Name"
         <<left<<setw(20)<<"Score"<<endl;

     for(i=0 ; i<n-1 ; i++)
     {
         for(j=0 ; j<n-1 ; j++)
         {
           if(s[j]<s[i+1])
           {
               temp=s[j];
               s[j]=s[i+1];
               s[i+1]=temp;

               tem=na[j];
               na[j]=na[i+1];
               na[i+1]=tem;

               te=sid[j];
               sid[j]=sid[i+1];
               sid[i+1]=te;
           }
         }
     }
    for(i=0 ; i<n; i++)
    {
        cout<<left<<setw(5)<<i+1
            <<left<<setw(15)<<na[i]
            <<left<<setw(20)<<s[i]<<endl;
    }

    cout<<"Top Therr performers"<<endl;
    for(i=0 ; i<3 ; i++)
    {
        cout<<i+1<<"."<<na[i]<<" :- "<<s[i]<<endl;
    }

}

