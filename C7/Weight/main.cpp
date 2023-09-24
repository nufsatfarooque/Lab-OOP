#include <iostream>
#include "Weight.h"

using namespace std;

int main()
{
    Weight w1(1);
    w1.showWeight();

    cout<<(w1)<<" kg"<<endl;

    Weight w2(4, 0.20);
    cout<<(w2)<<" kg"<<endl;
    return 0;
}
