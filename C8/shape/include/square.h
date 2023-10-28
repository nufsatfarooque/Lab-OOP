#ifndef SQUARE_H
#define SQUARE_H
#include<iostream>
#include "twodimensionalshape.h"
using namespace std;

class square : public twodimensionalshape
{
    public:
        square(int s);
        ~square();

        float Getarea() { return side*side; }
        //void Setarea(float val) { area = val; }
        float Getperimeter() { return 4*side; }
       // void Setperimeter(float val) { perimeter = val; }
       void whoAmI();


    protected:

    private:
        int side;
       // float area;
       // float perimeter;
};

#endif // SQUARE_H
