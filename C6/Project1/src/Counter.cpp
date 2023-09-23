#include "Counter.h"
#include <iostream>

using namespace std;
Counter::Counter():count(0)
{

    //ctor
}
Counter::Counter(int c):count(c)
{

}

Counter::Counter(int c, int inc)
{
    count=c;
     if(inc<0)
    {
        inc_step=1;
    }
}
Counter::~Counter()
{
    cout<<"P"<<endl;
    //dtor
}

void Counter::reset()
{
    count=0;
}

void Counter::setIncrementStep(int step_val)
{
    if(step_val>0)
    {
        inc_step=step_val;
    }
}
void Counter::increment()
{
    count+=inc_step;
}
Counter Counter::operator + (const Counter c2) const
{
    Counter temp;
    temp.count=count+c2.count;
    temp.inc_step=max(inc_step, c2.inc_step);
    return temp;
}
bool Counter::operator > (const Counter c2) const
{
    if(count>c2.count) return true;
    else return false;
}
bool Counter::operator<(const Counter c2) const
{
    if(count<c2.count) return true;
    else return false;
}

bool Counter::operator>=(const Counter c2) const
{
    if(count>=c2.count) return true;
    else return false;
}

bool Counter::operator<=(const Counter c2) const
{
    if(count<=c2.count) return true;
    else return false;
}

bool Counter::operator==(const Counter c2) const
{
    if(count==c2.count) return true;
    else return false;
}

bool Counter::operator!=(const Counter c2) const
{
    if(count!=c2.count) return true;
    else return false;
}
Counter Counter::operator+=(const Counter c2) const
{
    Counter temp;
    temp.count=count+c2.count;
    temp.inc_step=max(inc_step, c2.inc_step);
    return temp;
}
void Counter::operator + (const Counter c2)
{
    count=count+c2.count;
    inc_step=inc_step+c2.inc_step;
}
Counter Counter::operator ++()
{
    return Counter(++count);
}
Counter Counter::operator ++(int)
{
    return Counter(count++);
}






