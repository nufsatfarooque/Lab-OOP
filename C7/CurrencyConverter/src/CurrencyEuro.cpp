#include "CurrencyEuro.h"
#include "CurrencyDollar.h"
#include "CurrencyBDT.h"
#include <iostream>
#include <iomanip>

using namespace std;

CurrencyEuro::CurrencyEuro():euro(0), cents(0)
{
    //ctor
}

CurrencyEuro::CurrencyEuro(int e, int c):euro(e), cents(c)
{
    //ctor
}

void CurrencyEuro::display()
{
    cout<<endl<<"Euro "<<setw(3)<<':'<<euro<<setw(10)<<" Cents:"<<cents<<endl;
}
CurrencyEuro::operator CurrencyBDT() const
{

    float first=euro+(cents/100);
    first=first/0.0085;
    int sec=static_cast<int> (first);
    int third=(first-sec)*100;
    return CurrencyBDT(sec, third);
}

CurrencyEuro::operator CurrencyDollar() const
{

    float first=euro+(static_cast<float>(cents)/100);
    first=first*0.94;
    int sec=static_cast<int> (first);
    int third=(first-sec)*100;
    return CurrencyDollar(sec, third);
}

CurrencyEuro::~CurrencyEuro()
{
    //dtor
}
