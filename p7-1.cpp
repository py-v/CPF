#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    int i , l=1, n=0;
    string na,en,br,keyword;
     

    cout<<"********************************************"<<endl;
    cout<<"    student record management system "<<endl;
    cout<<"********************************************"<<endl;

    cout<<"enter enrollment number  :";
    cin>>en;
    cin.ignore();
    cout<<"enter student name  :";
    getline(cin,na);
    cout<<"branch  :";
    cin>>br;
    cout<<endl;

    cout<<"-----------------------------"<<endl;
    cout<<endl;
    cout<<"   student refernce "<<endl<<endl;
    cout<<na<<"-"<<en<<endl;
    cout<<"-----------------------------"<<endl<<endl;
    cout<<"first name "<<endl;
    for(i=0 ; i<10 ; i++)
    {
        if(na[i]==' ')
        {
            break;
        }
        l++;
    }
    for(i=0 ; i<l ; i++)
    {
        cout<<na[i];
    }
    cout<<endl<<"Last Name "<<endl;
    for(i=l ; i<na.length() ; i++)
    {
        cout<<na[i];
        
    }
    cout<<endl;
    cout<<"-------------------------------------"<<endl<<endl;
    cout<<"Enter Keyword :";
    cin>>keyword;

    cout<<endl<<"Keyword Found."<<endl;
   
    cout<<"-------------------------------------"<<endl<<endl;
    cout<<"   Student Report   "<<endl<<endl;
    cout<<"Enrollment Number :"<<en<<endl;
    cout<<"Student Name :"<<na<<endl;
    cout<<"Branch    :"<<br<<endl;
    
}