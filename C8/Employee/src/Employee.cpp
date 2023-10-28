#include "Employee.h"
#include"Address.h"

Employee::Employee(string s, string id, float t, bool u): name(s), emp_id(id), salary(t), onDuty(u)

{

    //ctor
}
void Employee::yearlyIncome()
{
    float yearlySalary=12*salary;
    cout<<"Yearly Salary: "<<yearlySalary<<endl;
}

void Employee::setPresentAddress(int a, int b, string s, int z, string dis, string cou)
{
    present_address.Sethouse_no(a);
    present_address.Setroad_no(b);
    present_address.Setcity(s);
    present_address.Setzip_code(z);
    present_address.SetDistrict(dis);
    present_address.SetCountry(cou);
}
void Employee::present_addressprint()
{
    cout<<present_address.Gethouse_no()<<endl;
    cout<<present_address.Getroad_no()<<endl;
    cout<< present_address.Getcity()<<endl;
     cout<<present_address.Getzip_code()<<endl;
     cout<<present_address.GetDistrict()<<endl;
     cout<<present_address.GetCountry()<<endl;
}

void Employee::setPermanentAddress(int a, int b, string s, int z, string dis, string cou)
{
    permanent_address.Sethouse_no(a);
    permanent_address.Setroad_no(b);
    permanent_address.Setcity(s);
    permanent_address.Setzip_code(z);
    permanent_address.SetDistrict(dis);
    permanent_address.SetCountry(cou);
}

void Employee::setpersonal_contact(string prim, string sec, string email)
{
    personal_contact.Setprim_phone_num(prim);
    personal_contact.Setsec_phone_num(sec);
    personal_contact.Setemail(email);
}

void Employee::setemergency_contact(string prim, string sec, string email)
{
    emergency_contact.Setprim_phone_num(prim);
    emergency_contact.Setsec_phone_num(sec);
    emergency_contact.Setemail(email);
}

Employee::~Employee()
{
    //dtor
}
