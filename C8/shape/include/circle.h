#ifndef CIRCLE_H
#define CIRCLE_H

#include "twodimensionalshape.h"


class circle : public twodimensionalshape
{
    public:
        circle(float f);
        ~circle();

        float Getarea() { return 3.14*radius*radius; }

        float Getperimeter() { return 2*3.14*radius; }
        void whoAmI();

    protected:

    private:
        float radius;
};

#endif // CIRCLE_H
