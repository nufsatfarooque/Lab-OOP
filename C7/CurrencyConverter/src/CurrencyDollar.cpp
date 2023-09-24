#include "CurrencyDollar.h"
#include "CurrencyBDT.h"
#include "CurrencyEuro.h"
#include <iostream>
using namespace std;

CurrencyDollar::CurrencyDollar():dollars(0), cents(0)
{
    //ctor
}

CurrencyDollar::CurrencyDollar(int d, int c):dollars(d), cents(c)
{
    //ctor
}

void CurrencyDollar::display()
{
    cout<<"Dollar :"<<dollars<<" Cents :"<<cents<<endl;
    //dtor
}
/*CurrencyDollar::operator CurrencyBDT() const
{
    float first=dollars+(cents/100);
    first=first/0.0091;
    int sec=static_cast<int> (first);
    int third=(first-sec)*100;
    return CurrencyBDT(sec, third);
}

CurrencyDollar::operator CurrencyEuro() const
{
    float first=dollars+(cents/100);
    first=first/0.94;
    int sec=static_cast<int> (first);
    int third=(first-sec)*100;
    return CurrencyEuro(sec, third);
}*/

CurrencyDollar::~CurrencyDollar()
{
    //dtor
}
