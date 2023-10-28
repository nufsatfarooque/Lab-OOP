#ifndef ENGINEER_H
#define ENGINEER_H

#include "Employee.h"


class Engineer : public Employee
{
    public:
        Engineer(string s, string id, float t, bool u);
        void Setsalary();
        ~Engineer();

    protected:

    private:
};

#endif // ENGINEER_H
