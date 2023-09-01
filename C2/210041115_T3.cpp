#include<iostream>
#include<cmath>
using namespace std;

class Rectangle
{
    private:
    float length, width;
    public:
    Rectangle(float l=1, float w=1)
    {
        length=l;
        width=w;
    }
    void setValue(float l, float w)
    {
        if((l>=1.0 && l<20.0) && (w>=1.0 && l<20.0))
        {
            length=l;
            width=w;
        }
    }
    float getLength()
    {
        return length;
    }
    float getWidth()
    {
        return width;
    }
    float perimeter()
    {
        return (2*(length+width));
    }
    float area()
    {
        return (length*width);
    }
    float diagonal()
    {
        return (sqrt(pow(length,2) + pow(width,2)));
    }
    float angle()
    {
        return ((atan(width/length))*180)/3.1416;
    }

};

int main()
{
    Rectangle r1;
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl;
    cout<<r1.diagonal()<<endl;
    cout<<r1.getLength()<<endl;
    cout<<r1.getWidth()<<endl;
    cout<<r1.angle()<<endl;

    Rectangle r2(4, 4);
    cout<<r2.area()<<endl;
    cout<<r2.perimeter()<<endl;
    cout<<r2.diagonal()<<endl;
    cout<<r2.getLength()<<endl;
    cout<<r2.getWidth()<<endl;
    cout<<r2.angle()<<endl;
}