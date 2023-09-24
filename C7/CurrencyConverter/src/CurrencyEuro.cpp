#include "CurrencyEuro.h"
#include "CurrencyDollar.h"
#include "CurrencyBDT.h"
#include <iostream>
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
    cout<<"Euro :"<<euro<<" cents:"<<cents<<endl;
}
/*CurrencyEuro::operator CurrencyBDT() const
{

}

CurrencyEuro::operator CurrencyDollar() const
{

}*/

CurrencyEuro::~CurrencyEuro()
{
    //dtor
}
