#include "Manager.h"

Manager::Manager(string s, string id, float t, bool u):Employee( s,  id, 10000, u)
{
     Employee::Setsalary(10000);
    //ctor
}
void Manager::Setsalary()
{
    Employee::Setsalary(10000);
}

Manager::~Manager()
{
    //dtor
}
