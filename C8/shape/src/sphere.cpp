#include "sphere.h"
#include<iostream>
using namespace std;

sphere::sphere(int s):side(s)
{
    //ctor
}

sphere::~sphere()
{
    //dtor
}

void sphere::whoAmI()
{
    cout<<"I am a sphere"<<endl;
    threedimensionalshape::whoAmI();
}

