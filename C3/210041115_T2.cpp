#include<bits/stdc++.h>
using namespace std;

class Medicine
{
    private:
    string name, genericName;
    double discountPercent, unitPrice, initialPrice, sellingPrice, totalValue;
    int number_of_items;

    public:
    static double value;
    Medicine():  unitPrice(0), number_of_items(0), discountPercent(0)
    {
        name=' ';
        genericName=' ';
       
    }
    Medicine(string n, string g, int j, double f=0)
    {
        name=n;
        genericName=g;
        unitPrice=initialPrice=f;
        number_of_items=j;
        totalValue=unitPrice*number_of_items;
    }

    double updatedPrice(int percent=5)
    {
        if(percent>=0 && percent<=45)
        {
            discountPercent=percent;
            return unitPrice-=((unitPrice*percent)/100);
        }
        else discountPercent=0;
      //  return unitPrice-=((unitPrice*percent)/100);
    }
    double getSellingPrice(int nos)
    {
        sellingPrice=nos*unitPrice;
        value+=sellingPrice;
        number_of_items-=nos;
        return sellingPrice;
    }
    double readjustedPrice()
    {
        return ((totalValue-sellingPrice)/number_of_items);
    }
    void resetPrice()
    {
        unitPrice=initialPrice;
    }
    double totalValueMedicine()
    {
        return value;
    }
    ~ Medicine ()
    {
        cout<<"Name of medicine :"<<name<<endl;
        cout<<"GenericName of medicine :"<<genericName<<endl;
        cout<<"Unit Price :"<<unitPrice<<endl;
        cout<<"Number of items after selling :"<<number_of_items<<endl;
        cout<<"Discount Percent :"<<discountPercent<<endl;
    }
};

double Medicine::value=0;

int main()
{
    Medicine m1("A", "F",10, 10);
    cout<<m1.updatedPrice(1)<<endl;
    cout<<m1.getSellingPrice(5)<<endl;
    cout<<m1.readjustedPrice()<<endl;
    Medicine m2("B", "G",10, 100);
    cout<<m2.updatedPrice(1)<<endl;
    cout<<m2.getSellingPrice(5)<<endl;
    cout<<m2.readjustedPrice()<<endl;
    m2.resetPrice();
    Medicine m3;
    cout<<m3.totalValueMedicine()<<endl;

}