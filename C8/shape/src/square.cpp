#include "square.h"
#include<iostream>
using namespace std;

square::square(int s):side(s)
{
    //ctor
}
void square::whoAmI()
{
    cout<<"I am square"<<endl;
    twodimensionalshape::whoAmI();
}

square::~square()
{
    //dtor
}
