#ifndef DESIGNER_H
#define DESIGNER_H

#include "Employee.h"


class Designer : public Employee
{
    public:
        Designer(string s, string id, float t, bool u);
        void Setsalary();
        ~Designer();

    protected:

    private:
};

#endif // DESIGNER_H
