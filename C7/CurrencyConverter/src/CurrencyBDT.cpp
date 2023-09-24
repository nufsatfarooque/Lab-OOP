#include "CurrencyBDT.h"
#include "CurrencyDollar.h"
#include "CurrencyEuro.h"
#include <iostream>
#include <iomanip>
using namespace std;

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

void CurrencyBDT::display()
{
    cout<<endl<<"Taka "<<setw(3)<<':'<<taka<<setw(10)<<" Poisha: "<<poisha<<endl;
}
CurrencyBDT::operator CurrencyDollar() const
{
    float first=taka+(static_cast<float>(poisha)/100);
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
