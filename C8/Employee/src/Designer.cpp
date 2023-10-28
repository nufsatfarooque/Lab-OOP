#include "Designer.h"

Designer::Designer(string s, string id, float t, bool u):Employee(s, id, 7000, u)
{
    Employee::Setsalary(7000);
    //ctor
}
void Designer::Setsalary()
{
    Employee::Setsalary(7000);
}

Designer::~Designer()
{
    //dtor
}
