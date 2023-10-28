#ifndef CYLINDER_H
#define CYLINDER_H

#include <threedimensionalshape.h>


class cylinder : public threedimensionalshape
{
    public:
        cylinder(float r, float h);
        ~cylinder();

        float Getsurface_area() { return (2*3.14*radius*height) + (2*3.14*radius*radius); }
        float Getvolume() { return 3.14*radius*radius*height; }
        void whoAmI();

    protected:

    private:
        float radius, height;
};

#endif // CYLINDER_H
