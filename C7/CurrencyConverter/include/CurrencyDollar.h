#ifndef CURRENCYDOLLAR_H
#define CURRENCYDOLLAR_H
#include "CurrencyBDT.h"
#include "CurrencyEuro.h"

class CurrencyEuro;
class CurrencyBDT;

class CurrencyDollar
{
    public:
        CurrencyDollar();
        CurrencyDollar(int d, int c);
        ~CurrencyDollar();
        void display();
       operator CurrencyBDT () const;
       operator CurrencyEuro () const;

    protected:

    private:
        int dollars;
        int cents;
};

#endif // CURRENCYDOLLAR_H
