#include <iostream>
#include "Coordinate.h"
using namespace std;

int main()
{
    Coordinate c1(1,1), c2(2, 2);
    cout<<c1.getDistance()<<endl<<c1.getDistance(c2)<<endl;
    c1.move_x(4);
    c1.move_y(4);
    c1.display();

    c1.move_(5);
    c1.display();

    cout<<(c1>c2)<<endl;
    cout<<(c1<c2)<<endl;
    cout<<(c1>=c2)<<endl;
    cout<<(c1<=c2)<<endl<<(c1==c2)<<endl<<(c1!=c2)<<endl;
    ++c2;
    c2.display();
    Coordinate c3=c2++;
    c3.display();
    c2.display();

    --c2;
    c2.display();
    c3=c2--;
    c3.display();
    c2.display();
    return 0;
}
