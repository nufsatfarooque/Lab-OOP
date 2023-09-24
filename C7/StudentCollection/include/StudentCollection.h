#ifndef STUDENTCOLLECTION_H
#define STUDENTCOLLECTION_H
#include<string>
#include<iostream>
using namespace std;

class StudentCollection
{
    public:
        StudentCollection();
        ~StudentCollection();


        double operator[] (const string& name) ;

        void addStudent (const string name, double grade);

    protected:

    private:
        string names[10];
        double grades[10];
        int i;
};

#endif // STUDENTCOLLECTION_H
