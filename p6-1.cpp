#include<iostream>
#include<iomanip>
#include <string>
using namespace std;

int main()
{
    cout<<"**************************************"<<endl;
    cout<<"   SPORTS EVENT SCORE ANALYSIS  "<<endl;
    cout<<"**************************************"<<endl;

    cout<<endl;

    int n,i,t=0,tem,j;
    string id,name;
    float a;

    cout<<"Enter number of participants:";
    cin>>n;

    cout<<endl;
    cout<<endl;

    string sid[n];
    string na[n];
    int s[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter Participinat ID :";
        cin>>sid[i];
        cout<<"Enter Participinat Name :";
        cin>>na[i];
        cout<<"Enter score :";
        cin>>s[i];
    }

    cout<<endl;
    cout<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<"   Participant Performance "<<endl;
    cout<<"-------------------------------"<<endl;
    cout<<endl;
    cout<<left<<setw(15)<<"ID";
    cout<<setw(20)<<"Name";
    cout<<setw(10)<<"Score";

    cout<<endl<<"-------------------------------"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<setw(15)<<sid[i]
            <<setw(20)  << na[i]
            <<setw(10) << s[i]
            <<endl;

    }
    cout<<"-------------------------------"<<endl;
    for(i=0 ; i<n ; i++)
    {
        t=t+s[i];
    }
    a=t/(float)n;

    cout<<endl;

    for(i=0 ; i<n-1 ; i++)
    {
        for(j=0; j<n-1 ; j++)
        {
         if(s[j]<s[i+1])
           {
            tem=s[j];
            s[j]=s[i+1];
            s[i+1]=tem;
           }
        }
    }
     for(i=0 ; i<n; i++)
    {
        cout<<s[i]<<endl;

    }


    cout<<"Total Score : "<<t<<endl;
    cout<<"Average Score : "<<a<<endl;
    cout<<"Highest Score : "<<s[0]<<endl;
    cout<<"Lowest Score : "<<s[n-1]<<endl;

}
