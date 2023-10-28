#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include<string>
#include<iostream>
#include"Address.h"
#include"Contact_Info.h"
using namespace std;

class Employee
{
    public:
        Employee(string s, string id, float t, bool u);
        void yearlyIncome();
        ~Employee();

        string Getname() { return name; }
        void Setname(string val) { name = val; }
        string Getemp_id() { return emp_id; }
        void Setemp_id(string val) { emp_id = val; }
        float Getsalary() { return salary; }
        void Setsalary(float val) { salary = val; }
        bool GetonDuty() { return onDuty; }
        void SetonDuty(bool val) { onDuty = val; }
        void setPresentAddress(int a, int b, string s, int z, string dis, string coun );
        void setPermanentAddress(int a, int b, string s, int z, string dis, string coun );
        void setpersonal_contact(string prim, string sec, string email);
        void setemergency_contact(string prim, string sec, string email);
        void present_addressprint();

    protected:

    private:
        string name;
        string emp_id;
        float salary;
        bool onDuty;
        Address present_address, permanent_address;
        Contact_Info personal_contact, emergency_contact;
};

#endif // EMPLOYEE_H
