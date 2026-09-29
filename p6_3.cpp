#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;

int main()
{
    int n, position, i;
    char id[100][10], name[100][20], grade[100][2], new_name[20];
    float per[100], new_per;
    char s[10], s_id[10];

    cout<<"********************************************************"<<endl;
    cout<<"STUDENT RECORD MANAGEMENT SYSTEM"<<endl;
    cout<<"********************************************************"<<endl;

    cout<<"Enter number of student :";
    cin>>n;

    cout<<"Enter Student Details"<<endl;
    cout<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<"Enter student ID :";
        cin>>id[i];
        cout<<"Enter Student Name :";
        cin>>name[i];
        cout<<"Enter Student Percentage :";
        cin>>per[i];
    }
    cout<<"---------------------------------------------------------------"<<endl;

    cout<<"Current Student Records"<<endl;
    cout<<endl;

    cout<<left<<setw(5)<<"ID";
    cout<<left<<setw(13)<<"Name";
    cout<<left<<setw(20)<<"Percentage";
    cout<<setw(27)<<"Grade"<<endl;
        
    for(int i=0; i<n; i++)
    {
        

        cout<<left<<setw(5)<<id[i];
        cout<<left<<setw(13)<<name[i];
        cout<<left<<setw(20)<<per[i];

        if (per[i]>100 || per<0)
        {
            cout<<"Invalid marks";
        }
        else if (per[i]>=90)
            cout<<left<<setw(27)<<"O";
        else if (per[i]>=80)
            cout<<left<<setw(27)<<"A+";
        else if (per[i]>=70)
            cout<<left<<setw(27)<<"A";
        else if (per[i]>=60)
            cout<<left<<setw(27)<<"B+";
        else if (per[i]>=50)
            cout<<left<<setw(27)<<"B";
        else if (per[i]>=40)
            cout<<left<<setw(27)<<"C";
        else
            cout<<left<<setw(27)<<"F";
        cout<<endl;
    }
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<endl;

    cout<<"Enter New Student"<<endl;
    cout<<"Enter Position :";
    cin>>position;
    cout<<endl;

    int index = position-1;

    if(position>=1 && position<=n+1 && position<100)
    {
        for(i=n; i>=index; i--)
        {
            strcpy(id[i],id[i-1]);
            strcpy(name[i],name[i-1]);
            per[i] = per[i-1];
            strcpy(grade[i],grade[i-1]);
        }

        cout<<"Enter student ID :";
        cin>>id[index];
        cout<<"Enter Student Name :";
        cin>>name[index];
        cout<<"Enter Student Percentage :";
        cin>>per[index];
    }

    cout<<"Record Updated Successfully."<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<endl;

    cout<<"Updated Student Records"<<endl;

     for(i=0; i<n+1; i++)
    {
        cout<<left<<setw(5)<<id[i];
        cout<<left<<setw(13)<<name[i];
        cout<<left<<setw(20)<<per[i];

        if (per[i]>100 || per<0)
        {
            cout<<"Invalid marks";
        }
        else if (per[i]>=90)
            cout<<left<<setw(27)<<"O";
        else if (per[i]>=80)
            cout<<left<<setw(27)<<"A+";
        else if (per[i]>=70)
            cout<<left<<setw(27)<<"A";
        else if (per[i]>=60)
            cout<<left<<setw(27)<<"B+";
        else if (per[i]>=50)
            cout<<left<<setw(27)<<"B";
        else if (per[i]>=40)
            cout<<left<<setw(27)<<"C";
        else
            cout<<left<<setw(27)<<"F";
        cout<<endl;
    }

    cout<<"---------------------------------------------------------------"<<endl;
    cout<<endl;

    cout<<"Update Student Record"<<endl;
    cout<<endl;

    cout<<"Enter student ID :";
    cin>>s;

    for(i=0; i<n; i++)
    {
        if(strcmp (s, id[i])==0)
        {
            cout<<left<<setw(5)<<id[i];
            cout<<left<<setw(13)<<name[i];
            cout<<left<<setw(20)<<per[i];
            cout<<left<<setw(27)<<grade[i]<<endl;
        }
    }

    cout<<"Enter new name :";
    cin >> new_name;
    cout<<"Enter new percentage :";
    cin >> new_per;
    cout<<endl;

    for(i=0; i<n; i++)
    {
        if(strcmp (s, id[i])==0)
        {
            strcpy(name[i] , new_name);
            per[i] = new_per;
        }
    }

    cout<<"Record Updated Succesfully."<<endl;

    cout<<"---------------------------------------------------------------"<<endl;
    cout<<endl;

    cout<<left<<setw(5)<<"ID";
    cout<<left<<setw(13)<<"Name";
    cout<<left<<setw(20)<<"Percentage";
    cout<<setw(27)<<"Grade"<<endl;

    for(int i=0; i<n+1; i++)
    {
        cout<<left<<setw(5)<<id[i];
        cout<<left<<setw(13)<<name[i];
        cout<<left<<setw(20)<<per[i];

        if (per[i]>100 || per[i]<0)
        {
            cout<<"Invalid marks";
        }
        else if (per[i]>=90)
            cout<<left<<setw(27)<<"O";
        else if (per[i]>=80)
            cout<<left<<setw(27)<<"A+";
        else if (per[i]>=70)
            cout<<left<<setw(27)<<"A";
        else if (per[i]>=60)
            cout<<left<<setw(27)<<"B+";
        else if (per[i]>=50)
            cout<<left<<setw(27)<<"B";
        else if (per[i]>=40)
            cout<<left<<setw(27)<<"C";
        else
            cout<<left<<setw(27)<<"F";
        cout<<endl;
    }
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<endl;

    cout<<"Delete Student Record"<<endl;

    cout<<"Enter position :";
    cin >> position;
    cout<<endl;

    for(i= index + 1; i<n+1; i++)
    {
        strcpy(id[i-1],id[i]);
        strcpy(name[i-1],name[i]);
        per[i-1] = per[i];
    }

    cout<<"Record Deleted Successfully."<<endl;
    cout<<"---------------------------------------------------------------"<<endl;
    cout<<endl;

    cout<<"Final Student Records"<<endl;

    cout<<left<<setw(5)<<"ID";
    cout<<left<<setw(13)<<"Name";
    cout<<left<<setw(20)<<"Percentage";
    cout<<setw(27)<<"Grade"<<endl;

    for(int i=0; i<n; i++)
    {
        cout<<left<<setw(5)<<id[i];
        cout<<left<<setw(13)<<name[i];
        cout<<left<<setw(20)<<per[i];

        if (per[i]>100 || per[i]<0)
        {
            cout<<"Invalid marks";
        }
        else if (per[i]>=90)
            cout<<left<<setw(27)<<"O";
        else if (per[i]>=80)
            cout<<left<<setw(27)<<"A+";
        else if (per[i]>=70)
            cout<<left<<setw(27)<<"A";
        else if (per[i]>=60)
            cout<<left<<setw(27)<<"B+";
        else if (per[i]>=50)
            cout<<left<<setw(27)<<"B";
        else if (per[i]>=40)
            cout<<left<<setw(27)<<"C";
        else
            cout<<left<<setw(27)<<"F";
        cout<<endl;
    }    

    return 0;
}
