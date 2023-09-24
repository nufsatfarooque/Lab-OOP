#ifndef WEIGHT_H
#define WEIGHT_H


class Weight
{
    public:
        Weight();
        Weight(double kg);
        Weight(int pound, double ounce);
        ~Weight();

        void showWeight();
        operator double() const;

    protected:

    private:
        double kgToPound;
        double pound;
        double ounce;
};

#endif // WEIGHT_H
