#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "twodimensionalshape.h"


class triangle : public twodimensionalshape
{
    public:
        triangle(float a, float b, float c);
        ~triangle();

        float Getarea();
        float Getperimeter() { return a+b+c; }
        void whoAmI();

    protected:

    private:
        float a, b, c;
};

#endif // TRIANGLE_H
