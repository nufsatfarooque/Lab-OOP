#ifndef CURRENCYBDT_H
#define CURRENCYBDT_H
//#include "CurrencyDollar.h"
//#include "CurrencyEuro.h"
class CurrencyDollar; // Forward declaration
class CurrencyEuro;

class CurrencyBDT
{
    public:
        CurrencyBDT();
        CurrencyBDT(int t, int p);
        ~CurrencyBDT();
        void display();
        operator CurrencyDollar () const;
        operator CurrencyEuro () const;

    protected:

    private:
        int taka;
        int poisha;
};

#endif // CURRENCYBDT_H
