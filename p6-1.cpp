#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<"**************************************"<<endl;
    cout<<"   SPORTS EVENT SCORE ANALYSIS  "<<endl;
    cout<<"**************************************"<<endl;
    cout<<endl;
    int n,i;
    string id,name;
    cout<<"Enter number of participants:";
    cin>>n;
    cout<<endl;
    cout<<endl;
    string s[n];
    string k[n];
    int c[n];
    for(i=0;i<n;i++)
    {
        cout<<"Enter Participinat ID :";
        cin>>s[i];
        cout<<"Enter Participinat Name :";
        cin>>k[i];
        cout<<"Enter score :";
        cin>>c[i];
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
        cout<<setw(15)<<s[i] ;
        cout<<setw(20)  << k[i]  ;
        cout<< setw(10) << c[i]<<endl;
    }


}
