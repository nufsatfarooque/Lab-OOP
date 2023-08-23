#include<iostream>
using namespace std;

class Time
{
    private:
    int hour=0, minute=0, second=0;
    public:
    int hours()
    {
        return hour;
    } 
    int minutes()
    {
        return minute;
    }
    int seconds()
    {
        return second;
    }
    void reset(int h, int m, int s)
    {
        hour=h, minute=m, second=s;
        if(second>=60)
        {
            minute+=second/60;
            second=second%60;
        }
        if(minute>=60)
        {
            hour+=minute/60;
            minute=minute%60;
        }
        if(hour>=24)
        {
            hour=hour%24;
        }
    }
    void advance(int h, int m, int s)
    {
        second+=s;
        if(second>=60)
        {
            minute+=second/60;
            second=second%60;
        }
        minute+=m;
        if(minute>=60)
        {
            hour+=minute/60;
            minute=minute%60;
        }
        hour+=h;
        if(hour>=24)
        {
            hour=hour%24;
        }
    }
    void print()
    {
        cout<<"Time= "<<hour<<":"<<minute<<":"<<second<<endl;
    }

};

int main()
{
    Time t1;
    cout<<t1.hours()<<endl;
    cout<<t1.minutes()<<endl;
    cout<<t1.seconds()<<endl;
    t1.advance(2,33,49);
    t1.print();

    t1.reset(0, 1, 0);
    t1.print();

    t1.reset(0, 0, 0);
    t1.advance( 12, 30, 123);
    t1.print();

    //t1.reset();
    t1.advance( 12, 30, 61);
    t1.print(); 

    return 0;
}