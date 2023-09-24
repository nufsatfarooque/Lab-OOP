#ifndef CURRENCYEURO_H
#define CURRENCYEURO_H
#include "CurrencyDollar.h"
#include "CurrencyBDT.h"

class CurrencyEuro
{
    public:
        CurrencyEuro();
        CurrencyEuro(int e, int c);
        void display();
        ~CurrencyEuro();
//        operator CurrencyBDT () const;
//        operator CurrencyDollar () const;

    protected:

    private:
        int euro;
        int cents;
};

#endif // CURRENCYEURO_H
