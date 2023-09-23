#include "Coordinate.h"
#include<iostream>
#include<math.h>
using namespace std;

Coordinate::Coordinate(float a, float o):abscissa(a), ordinate(o)
{
    //ctor
}

Coordinate::~Coordinate()
{
    //dtor
}
void Coordinate::display()
{
    cout<<"Abscissa :"<<abscissa<<endl;
    cout<<"Ordinate :"<<ordinate<<endl;
}

float Coordinate::getDistance(Coordinate c)
{
    float a_dif=abs(abscissa-c.abscissa);
    float o_dif=abs(ordinate-c.ordinate);
    float dis=sqrt(pow(a_dif, 2)+pow(o_dif, 2));
    return dis;
}

float Coordinate::getDistance() const
{
    float dis=sqrt(pow(abscissa, 2)+pow(ordinate, 2));
    return dis;
}

void Coordinate::move_x(float val)
{
    abscissa+=val;
}

void Coordinate::move_y(float val)
{
    ordinate+=val;
}

void Coordinate::move_(float val)
{
    move_x(val);
    move_y(val);
}
bool Coordinate::operator>(const Coordinate c2) const
{
    if(getDistance()>c2.getDistance())
        return true;
    else return false;
}

bool Coordinate::operator<(const Coordinate c2) const
{
    if(getDistance()<c2.getDistance())
        return true;
    else return false;
}

bool Coordinate::operator>=(const Coordinate c2) const
{
    if(getDistance()>=c2.getDistance())
        return true;
    else return false;
}

bool Coordinate::operator<=(const Coordinate c2) const
{
    if(getDistance()<=c2.getDistance())
        return true;
    else return false;
}

bool Coordinate::operator==(const Coordinate c2) const
{
    if(getDistance()==c2.getDistance())
        return true;
    else return false;
}

bool Coordinate::operator!=(const Coordinate c2) const
{
    if(getDistance()!=c2.getDistance())
        return true;
    else return false;
}
Coordinate Coordinate::operator++()
{
    return Coordinate(++abscissa, ++ordinate);
}

Coordinate Coordinate::operator++(int)
{
    return Coordinate(abscissa++, ordinate++);
}

Coordinate Coordinate::operator--()
{
    return Coordinate(--abscissa, --ordinate);
}

Coordinate Coordinate::operator--(int)
{
    return Coordinate(abscissa--, ordinate--);
}
