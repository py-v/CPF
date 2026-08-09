#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    short int m1,m2,m3,t;
    float a,p;

q:
    cout<<"enter your mark m1 :";
    cin>>m1;
    cout<<"enter your mark m2 :";
    cin>>m2;
    cout<<"enter your mark m3 :";
    cin>>m3;

    if(m1<0 || m1>100 || m2<0 || m2>100 || m3<0 || m3>100)
    {
        cout<<"invaild marks";
        goto  q;
    }
    else
    {

    }
    a=p=(m1+m2+m3)/3.0;
    t=m1+m2+m3;

    cout<<"**************************************"<<endl;
    cout<<"STUDNT RECORD MANAGEMENT SYSTEM"<<endl;
    cout<<"**************************************"<<endl;

    cout<<"--------------------------------------"<<endl;
    cout<<"  Academic summary"<<endl;
    cout<<"--------------------------------------"<<endl;

    cout<<"total marks "<<setw(9)<<":";
    cout<<t<<endl;
    cout<<"average marks "<<setw(7)<<":";
    cout<<a<<endl;
    cout<<" precentage  "<<setw(8)<<":";
    cout<<p<<"%"<<endl;

    cout<<"--------------------------------------"<<endl;
    cout<<"  Academic result"<<endl;
    cout<<"--------------------------------------"<<endl;


    if(t>100 && t<=300)
    {
        cout<<"result "<<setw(9)<< ":";
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
            cout<<"Grade"<< setw(12)<<":";
            cout<<"F"<<endl;
        }

        cout<<"congratulation! you have successfully passed.";

    }

    else
    {
        cout<<"result   :"<<"fail";
    }
}

