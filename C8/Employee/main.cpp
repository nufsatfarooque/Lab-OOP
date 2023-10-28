#include <iostream>
#include"Employee.h"
#include"Manager.h"
#include"Engineer.h"
#include"Designer.h"
using namespace std;

int main()
{
    Employee Emp2("Aaa", "A12", 1000, true);

    Emp2.yearlyIncome();

    Manager m2("A", "B12", 9, true);

    cout<<m2.Getname()<<endl;
    m2.Setemp_id("A12");
    m2.SetonDuty(true);
    m2.yearlyIncome();

    Engineer e1("B", "JJ", 20, false);
    e1.setemergency_contact("1234", "987", "@iut");
    cout<<e1.GetonDuty()<<endl;
    e1.yearlyIncome();
    e1.setPresentAddress(10, 20, "a-block", 3334, "dhaka", "BD");
    e1.present_addressprint();
    return 0;
}
