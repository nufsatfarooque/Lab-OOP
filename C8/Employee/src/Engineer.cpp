#include "Engineer.h"

Engineer::Engineer(string s, string id, float t, bool u):Employee( s,  id, 8000,  u)
{
    Employee::Setsalary(8000);
    //ctor
}
void Engineer::Setsalary()
{
    Employee::Setsalary(8000);
}

Engineer::~Engineer()
{
    //dtor
}
