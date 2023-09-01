#include<iostream>
#include<string>
using namespace std;

class Calculator
{
    private:
    int num;
    public:
    Calculator()
    {
        num=0;
    }
    Calculator(int val)
    {
        num=val;
    }
    int getValue()
    {
        return num;
    }
    void setValue()
    {
        num=0;
    }
    void add( int Value)
    {
        num+=Value;
    }
    void subtract(int Value)
    {
        num-=Value;
    }
    void multiply(int Value)
    {
        num*=Value;
    }
    void divideBy(int Value)
    {
        if(Value!=0)
        {
            num/=Value;
        }
        else 
        {
            cout<<"Error : divide by 0 is undefined.\n";
        }
    }
    void clear()
    {
        num=0;
    }
    void display()
    {
        cout<<"Calculator display: "<<num<<endl;
    }
    ~Calculator()
    {
        cout<<"Calculator object is destroyed"<<endl;
    }

};

int main()
{
    Calculator c1;
    c1.add(10);
    c1.display();

    c1.add(7);
    c1.display();

    c1.multiply(31);
    c1.display();

    c1.subtract(42);
    c1.display();

    c1.divideBy(7);
    c1.display();

    c1.divideBy(0);
    c1.display();

    c1.add(3);
    c1.display();

    c1.subtract(1);
    c1.display();

    c1.clear();
    c1.display();

    

}