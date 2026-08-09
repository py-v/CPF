#include <iostream>
#include <iomanip>
using namespace std;
 main()
 {
     cout<<"**************************************" <<endl;
     cout<<" STUDENT RECORD MANGEMENT SYSTEM " << endl;
     cout<<"**************************************" <<endl;

     string  en;
     string stu;
     string branch;
     short int sem,m1,m2,m3,t,a,p,re;
     long int n;

     cout<<left<< setw(35)<<"Enter Student Enrollment Number"<<": ";
     cin>> en;
     cin.ignore();
     cout<<left<< setw(35)<<"Enter Student Name"<<": "  ;
     getline(cin,stu);
     cout<<left<< setw(35)<<"Enter Branch"<<": "  ;
     cin>> branch;
     cout<<left<< setw(35)<<"Enter Semester"<<": "  ;
     cin>> sem;
     cout<<left<< setw(35)<<"Enter Mobile Number"<<": "  ;
     cin>> n;



     cout<<endl<<"----------------------------------------"<<endl;
     cout<<"Academic Information"<<endl;
     cout<<"----------------------------------------"<<endl;


     cout<<left<<setw(35)<<"Enter Mathematics Marks"<<": ";
     cin>>m1;
     cin.ignore();
     cout<<left<<setw(35)<<"Enter Physics Marks"<<": ";
     cin>>m2;
     cin.ignore();
     cout<<left<<setw(35)<<"Enter Programming Foundation Marks"<<": ";
     cin>>m3;
     cin.ignore();

     cout<<endl<<"----------------------------------------"<<endl;
     cout<<"Academic Summary"<<endl;
     cout<<"----------------------------------------"<<endl;


      cout<<left<<setw(35)<<"Total Marks"<<": ";
      cin>>t;
      cin.ignore();

      cout<<left<<setw(35)<<"Average Marks"<<": ";
      cin>>a;
      cin.ignore();

      cout<<left<<setw(35)<<"Percentage"<<": ";
      cin>>p;
      cin.ignore();



      cout<<"----------------------------------------" <<endl;
      cout<<" STUDENT RECORD MANGEMENT SYSTEM " << endl;
      cout<<"----------------------------------------" <<endl;


      cout<<left<<setw(35)<<"Enter Student Enrollment Number :" << en << endl;
      cout<<left<<setw(35)<<"Enter Student Name :" << stu << endl;
      cout<<left<<setw(35)<<"Enter Branch :"<< branch << endl;
      cout<<left<<setw(35)<<"Enter Semester :" << sem << endl;
      cout<<left<<setw(35)<<"Enter Mobile Number :" << n << endl;


     cout<<endl<<"----------------------------------------"<<endl;
     cout<<"Academic Information"<<endl;
     cout<<"----------------------------------------"<<endl;

      cout<<left<<setw(35)<<"Enter Mathematics Marks"<<": "<<++m1 << endl;
      cout<<left<<setw(35)<<"Enter Physics Marks"<<": "<<++m2 << endl;
      cout<<left<<setw(35)<<"Enter Programming Foundation Marks"<<": "<<++m3 << endl;

      cout<<left<<setw(35)<<"Enter Mathematics Marks"<<": "<<--m1 << endl;




     cout<<endl<<"----------------------------------------"<<endl;
     cout<<"Academic Summary"<<endl;
     cout<<"----------------------------------------"<<endl;

      cout<<left<<setw(35)<<"Total Marks"<<": "<<t<<endl;
      cout<<left<<setw(35)<<"Average Marks"<<": "<<a<<endl;
      cout<<left<<setw(35)<<"Percentage"<<": "<<p<<" %"<<endl;

       cout<<"----------------------------------------"<<endl;


    re = ++m1 + m2++ + --m3;
    cout<<re;
     return 0;
 }
