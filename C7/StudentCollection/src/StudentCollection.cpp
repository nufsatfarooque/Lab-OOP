#include "StudentCollection.h"
#include<iostream>
#include<string>
using namespace std;

StudentCollection::StudentCollection():i(0)
{
    //ctor
}

StudentCollection::~StudentCollection()
{
    //dtor
}
double& StudentCollection::operator[](const string& name)
{
    for(int j=0; j<10; j++)
    {
        if(name==names[j])
        {
//            char ch;
//            cout<<"Do you want to upgrade the value? y/n"<<endl;
//            cin>>ch;
//            if(ch=='n')
//            return grades[j];
//            else
//            {
//                double g;
//                cout<<"Enter grade: "<<endl;
//                cin>>g;
//                grades[j]=g;
//                return 0;
//            }
            return grades[j];

        }
    }
    if(j==10)
    {
        cout<<"Name not available";
        exit(1);
    }
}



void StudentCollection::addStudent(const string name, double grade)
{
    if(i==10) cout<<"Array full"<<endl;
    else
    {
        names[i]=name;
        grades[i]=grade;
        i++;
    }
}
