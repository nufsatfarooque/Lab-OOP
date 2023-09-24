#include "Weight.h"
#include<iostream>
using namespace std;

Weight::Weight():kgToPound(2.20462)
{
    //ctor
}
Weight::Weight(double kg)
{
    pound=kg*2.20462;
    ounce=(pound-static_cast<int>(pound))*16;
    pound=static_cast<int>(pound);
    //ctor
}
Weight::~Weight()
{
    //dtor
}
Weight::Weight(int pound, double ounce):pound(pound), ounce(ounce)
{

}
Weight::showWeight()
{
    cout<<pound<<" lb "<<ounce<<" oz"<<endl;
    //dtor
}
