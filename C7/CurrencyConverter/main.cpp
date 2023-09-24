#include <iostream>
#include "CurrencyBDT.h"
#include "CurrencyDollar.h"
#include "CurrencyEuro.h"

using namespace std;

int main()
{
    CurrencyBDT c1, c2(100, 0), c3(100, 2);
    CurrencyDollar d1;
    d1=c2;
    d1.display();
    CurrencyEuro e1;
    e1=c2;
    e1.display();

    return 0;
}
