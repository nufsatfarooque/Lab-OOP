#ifndef ZOOANIMAL_H
#define ZOOANIMAL_H
#include <iostream>
#include<string>
using namespace std;
class ZooAnimal
{
    public:
        ZooAnimal();
        virtual ~ZooAnimal();

        void setNameOfAnimal(string name)
        {
            nameOfAnimal=name;
        }
        void setBirthYear(int t)
        {
            birthYear=t;
        }
        void setCAgeNumber(int t)
        {
            cageNumber=t;
        }
        void WeightData(float r)
        {
            weightData=r;
        }
        void setHeight(int y)
        {
            height=y;
        }
        int getWeightData()
        {
            return weightData;
        }
        bool operator > (const ZooAnimal c2) const;
        bool operator < (const ZooAnimal c2) const;
        bool operator >= (const ZooAnimal c2) const;
        bool operator <= (const ZooAnimal c2) const;
        bool operator == (const ZooAnimal c2) const;
        bool operator != (const ZooAnimal c2) const;
        void operator +=(const int t) ;
        void operator -=(const int t) ;


    protected:

    private:
        string nameOfAnimal;
        int birthYear;
        int cageNumber;
        float weightData;
        int height;
};

#endif // ZOOANIMAL_H
