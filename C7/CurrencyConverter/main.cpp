#include <iostream>
#include "CurrencyBDT.h"
#include "CurrencyDollar.h"
#include "CurrencyEuro.h"

using namespace std;

int main()
{
    CurrencyBDT c1, c2(100, 0), c3(100, 2);
    CurrencyDollar d1, d2(1, 0), d3(100, 50);
    d1=c2;
    d1.display();

    CurrencyEuro e1, e2(1, 0), e3(100, 50);
    e1=c2;
    e1.display();

    c1=d2;
    c1.display();
    e1=d2;
    e1.display();

    c1=e2;
    c1.display();
    d1=e3;
    d1.display();

    return 0;
}
