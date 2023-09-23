#include "ZooAnimal.h"
#include<iostream>
#include<string>
using namespace std;
ZooAnimal::ZooAnimal()
{
    //ctor
}

ZooAnimal::~ZooAnimal()
{
    //dtor
}


bool ZooAnimal::operator>(const ZooAnimal c2) const
{
    if(weightData>c2.weightData) return true;
    else return false;
}

bool ZooAnimal::operator<(const ZooAnimal c2) const
{
    if(weightData<c2.weightData) return true;
    else return false;
}

bool ZooAnimal::operator>=(const ZooAnimal c2) const
{
    if(weightData>=c2.weightData) return true;
    else return false;
}

bool ZooAnimal::operator<=(const ZooAnimal c2) const
{
    if(weightData<=c2.weightData) return true;
    else return false;
}

bool ZooAnimal::operator==(const ZooAnimal c2) const
{
    if(weightData==c2.weightData) return true;
    else return false;
}

bool ZooAnimal::operator!=(const ZooAnimal c2) const
{
    if(weightData!=c2.weightData) return true;
    else return false;
}
void ZooAnimal::operator+=(const int t)
{
    weightData=weightData+t;
}

void ZooAnimal::operator-=(const int t)
{
    weightData=weightData-t;
}
