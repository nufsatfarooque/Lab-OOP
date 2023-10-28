#ifndef SPHERE_H
#define SPHERE_H

#include "threedimensionalshape.h"


class sphere : public threedimensionalshape
{
    public:
        sphere(int s);
        ~sphere();

        float Getsurface_area() { return 4*3.14*side*side; }
       // void Setsurface_area(float val) { surface_area = 4*3.14*side*side; }
        float Getvolume() { return (4*3.14*side*side*side)/3; }
       // void Setvolume(float val) { volume = (4*3.14*side*side*side)/3; }
        void whoAmI();
    protected:

    private:
        int side;

};

#endif // SPHERE_H
