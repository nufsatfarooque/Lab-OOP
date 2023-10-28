#include <iostream>
#include"shape.h"
#include"square.h"
#include"circle.h"
#include"triangle.h"
#include"cube.h"
#include"cylinder.h"
#include"sphere.h"
using namespace std;

int main()
{
    square s(4);
    cout<<s.Getarea()<<endl;
    cout<<s.Getperimeter()<<endl;
    s.whoAmI();

    sphere SS(3);
    cout<<SS.Getsurface_area()<<endl;
    cout<<SS.Getvolume()<<endl;
    SS.whoAmI();


    return 0;
}
