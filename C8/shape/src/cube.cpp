#include "cube.h"
#include<iostream>
using namespace std;

cube::cube(float f):s_length(f)
{
    //ctor
}

cube::~cube()
{
    //dtor
}
void cube::whoAmI()
{
    cout<<"I am cube"<<endl;
    threedimensionalshape::whoAmI();

}
