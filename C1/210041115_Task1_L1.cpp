#include<iostream>
using namespace std;

class Counter
{
    private:
    int count, increment_step;
    public:
    void setIncrementStep(int step_val)
    {
        increment_step=step_val;
    }
    int getCount()
    {
        return count;
    }
    void increment()
    {
        count+=increment_step;
    }
    void resetCount()
    {
        count=0;
    }


};

int main()
{
    Counter obj;
    //without initializing count
    cout<<obj.getCount()<<endl;
    obj.setIncrementStep(3);
    obj.increment();
    cout<<obj.getCount()<<endl;

    obj.resetCount();
    cout<<obj.getCount()<<endl;
    obj.setIncrementStep(3);
    obj.increment();
    cout<<obj.getCount()<<endl;

    
    obj.setIncrementStep(5);
    obj.increment();
    cout<<obj.getCount()<<endl;

    return 0;
}