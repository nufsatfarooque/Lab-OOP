#ifndef CUBE_H
#define CUBE_H

#include "threedimensionalshape.h"


class cube : public threedimensionalshape
{
    public:
        cube(float s);
        ~cube();

        float Getsurface_area() { return 6*s_length*s_length; }
        float Getvolume() { return s_length*s_length*s_length; }
        void whoAmI();

    protected:

    private:
        float s_length;
};

#endif // CUBE_H
