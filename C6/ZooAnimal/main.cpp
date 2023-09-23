#include <iostream>

#include<string>
#include "ZooAnimal.h"
using namespace std;

int main()
{
    ZooAnimal lion, tiger;
    lion.setBirthYear(2002);
    lion.setCAgeNumber(20);
    lion.WeightData(50);
    lion.setNameOfAnimal("Lion");
    cout<<lion.getWeightData()<<endl;

    tiger.WeightData(10);
    cout<<(lion>tiger)<<endl;
    tiger.WeightData(60);
    cout<<(lion<tiger)<<endl;
     tiger.WeightData(50);
     cout<<(lion>=tiger)<<endl;
     cout<<(lion<=tiger)<<endl;
     cout<<(lion==tiger)<<endl;
     cout<<(lion!=tiger)<<endl;
     lion+=2;
     cout<<lion.getWeightData()<<endl;
     lion-=11;
     cout<<lion.getWeightData()<<endl;
    return 0;
}
