#include "circle.h"
#include<iostream>
using namespace std;

circle::circle(float f):radius(f)
{
    //ctor
}

circle::~circle()
{
    //dtor
}
void circle::whoAmI()
{
    cout<<"I am a circle"<<endl;
    twodimensionalshape::whoAmI();
}
