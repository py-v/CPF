#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    short int n,x,m1,sum,t=0;
    float a,p;
    cout<<"*****************************************"<<endl;
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM "<<endl;
    cout<<"*****************************************"<<endl;

     cout<<endl;
     cout<<"Enter Number of subject :";
     cin>>n;
     cout<<endl;

     for(x=1; x<=n; x++)
      {

       M:cout<<"Enter Marks of Subject"<< x<<" :";
       cin>>m1;
       t=sum;
       sum=t+m1;
       if(m1<0 || m1>100)
       {
           cout<<"error:invilid marks "<<endl;
           goto M;

       }
       else
       {


       }
       a=p=sum/(float)n;


      }
      cout<<"Marks Enter Successfully"<<endl;
      cout<<endl;
      cout<<"total marks :"<<sum<<endl;
       cout<<"average marks "<<setw(12)<<":";
    cout<<a<<endl;

    cout<<left<<" precentage  "<<setw(8)<<":";
    cout<<p<<"%"<<endl;

      if(p>40 && p<=100)
    {
        cout<<endl;

        cout<<"result "<<setw(12)<< ":";
        cout<<"pass"<<endl;
        if (p>=90)
        {
            cout<<"Grade"<< setw(12)<<":";
            cout<<"O";
        }
        else if (p>=80)
        {
            cout<<"Grade"<< setw(12)<<":";
            cout<<"A+"<<endl;
        }
        else if (p>=70)
        {
            cout<<"Grade"<< setw(12)<<":";
            cout<<"A"<<endl;
        }
        else if (p>=60)
        {
            cout<<"Grade"<< setw(12)<<":";
            cout<<"B+"<<endl;
        }
        else if (p>=50)
        {
            cout<<"Grade"<< setw(12)<<":";
            cout<<"B"<<endl;
        }
        else if (p>=40)
        {
            cout<<"Grade"<< setw(12)<<":";
            cout<<"C"<<endl;
        }
        else
        {
            cout<<endl;
            cout<<left<<"Grade"<< setw(12)<<":";
            cout<<"F"<<endl;
        }
        cout<<endl;

        cout<<"congratulation! you have successfully passed.";

    }

    else
    {
        cout<<"result   :"<<"fail";
    }




}
