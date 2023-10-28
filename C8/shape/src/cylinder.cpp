#include "cylinder.h"
#include<iostream>
using namespace std;
cylinder::cylinder(float r, float h):radius(r), height(h)
{
    //ctor
}

cylinder::~cylinder()
{
    //dtor
}

void cylinder::whoAmI()
{
    cout<<"I am cylinder"<<endl;
    threedimensionalshape::whoAmI();
}
