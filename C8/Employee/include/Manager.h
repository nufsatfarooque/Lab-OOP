#ifndef MANAGER_H
#define MANAGER_H

#include "Employee.h"


class Manager : public Employee
{
    public:
        Manager(string s, string id, float t, bool u);
        void Setsalary();
        ~Manager();

    protected:

    private:
};

#endif // MANAGER_H
