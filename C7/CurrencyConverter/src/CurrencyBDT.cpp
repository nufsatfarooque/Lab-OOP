#include "CurrencyBDT.h"
#include "CurrencyDollar.h"
#include "CurrencyEuro.h"


CurrencyBDT::CurrencyBDT():taka(0), poisha(0)
{
    //ctor
}

CurrencyBDT::CurrencyBDT(int t, int p):taka(t), poisha(p)
{
    //ctor
}

CurrencyBDT::~CurrencyBDT()
{
    //dtor
}
CurrencyBDT::operator CurrencyDollar() const
{
    float first=taka+(poisha/100);
    first=first*0.0091;
    int sec=static_cast<int> (first);
    int third=(first-sec)*100;
    return CurrencyDollar(sec, third);

}

CurrencyBDT::operator CurrencyEuro() const
{
    float first=taka+(poisha/100);
    first=first*0.0085;
    int sec=static_cast<int> (first);
    int third=(first-sec)*100;
    return CurrencyEuro(sec, third);
}
