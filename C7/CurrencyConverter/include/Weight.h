#ifndef WEIGHT_H
#define WEIGHT_H


class Weight
{
    public:
        Weight();
        Weight(double kg);
        Weight(int pound, double ounce);
        showWeight();
        ~Weight();

    protected:

    private:
        int pound;
        double ounce;
        double kgToPound;
};

#endif // WEIGHT_H
