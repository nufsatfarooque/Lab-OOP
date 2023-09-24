#include "Weight.h"
#include <iostream>

using namespace std;

Weight::Weight():kgToPound(2.20462)
{
    //ctor
}
Weight::Weight(double kg):kgToPound(2.20462)
{
    double t=kg*kgToPound;
    pound=(int) t;
    ounce=t-pound;

}

Weight::Weight(int pd, double oc):pound(pd), ounce(oc), kgToPound(2.20462)
{

}

void Weight::showWeight()
{
    cout<<"Weight= "<<pound<<" pound "<<ounce<<" ounce "<<endl;
}

Weight::operator double() const
{
    return (pound+ounce)/kgToPound;
}

Weight::~Weight()
{
    //dtor
}
