#include "triangle.h"
#include<iostream>
#include<math.h>
using namespace std;

triangle::triangle(float a,float b, float c):a(a), b(b), c(c)
{
    //ctor
}

triangle::~triangle()
{
    //dtor
}

float triangle::Getarea()
{
    float s=(a+b+c)/2;
    return (sqrt)(s*(s-a)*(s-b)*(s-c));
}
void triangle::whoAmI()
{
    cout<<"I am a triangle"<<endl;
    twodimensionalshape::whoAmI();
}
