#include <iostream>
#include "Student.h"

using namespace std;



int main()
{


    Student stArray[5];

    string name;
    int id,totm=0, totp=0;
    float m,p,avg,avg2,maxm=0,maxp=0,lowm=101,lowp=101;

    // creating, initializing and placing Student objects in the array
    for(int i=0;i<5;i++)
    {
        Student s;

        cout<<endl;
        cout<<"Enter Name: ";
        getline(cin,name);

        cout<<"\nEnter id: ";
        cin>>id;

        cout<<"\nEnter Math Marks: ";
        cin>>m;

        cout<<"\nEnter Physics Marks: ";
        cin>>p;

        getchar();

        s.setNameAndId(name,id);
        s.setMathMarks(m);
        s.setPhyMarks(p);
        if (m>maxm)
        {
            maxm=m;
        }
        if (m<lowm)
        {
            lowm=m;
        }
        if (p>maxp)
        {
            maxp=p;
        }
        if (m<lowp)
        {
            lowp=p;
        }

        stArray[i] = s;
        totm= totm + m;
        totp= totp + p;
        }
        avg= totm/5.0;
        avg2= totp/5.0;


    cout<<"-----------------------------------"<<endl;



    // Q-5 of Task-3
    for(int i=0;i<5;i++)
    {

        cout<<"Name: "<<stArray[i].getName()<<" ID: "<<stArray[i].getId()
        <<" Total Marks: "<<stArray[i].getMathMarks()+stArray[i].getPhyMarks()<<endl;


    }
    for(int i=0;i<5;i++)
    {
        if(stArray[i].getMathMarks()==maxm)
        {
            cout<<stArray[i].getName()<< " \n\nGot the highest mark in Maths.\n\n";
        }
        if(stArray[i].getMathMarks()==lowm)
        {
            cout<<stArray[i].getName()<< " Got the lowest mark in Maths.\n\n";
        }
        if(stArray[i].getPhyMarks()==maxp)
        {
            cout<<stArray[i].getName()<< " Got the highest mark in Physics.\n\n";
        }
        if(stArray[i].getPhyMarks()==lowp)
        {
            cout<<stArray[i].getName()<< " Got the lowest mark in Physics.\n\n";
        }
    }

cout<<"Average Maths marks of the students are : "<<avg;
cout<<"\nAverage Physics marks of the students are : "<<avg2;


    return 0;
}




