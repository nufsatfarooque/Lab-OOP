#include<iostream>
#include<string.h>
using namespace std;

class Medicine
{
    private:
    char name[100], genericName[100];
    double discountPercent, unitPrice;
    public:
    void assignName(char name1[], char genericName1[])
    {
      strcpy(name, name1);
      strcpy(genericName, genericName1);
    }
    void assignPrice(double price=0)
    {
        if(price<0)
        {
            unitPrice=0;
        }
        else unitPrice=price;
    }
    void setDiscountPercent(double percent=5)
    {
        if(percent>=0 && percent<=45)
        {
            discountPercent=percent;
        }
        else discountPercent=5;
    }
    double getSellingPrice(int nos)
    {
        return (nos*unitPrice-((nos*unitPrice)*(discountPercent/100)));

    }
    void display()
    {
        cout<<name<<'('<<genericName<<") has a unit price BDT "<<unitPrice<<". Current discount "<<discountPercent<<"%"<<endl;

    }



};

int main()
{
    Medicine med;
    char name[]="Napa";
    char genName[]="Paracetamol";
    med.assignName(name, genName);
    med.assignPrice(0.80);
    med.setDiscountPercent(10);
    med.getSellingPrice(1);
    med.display();
    cout<<"Selling price is "<<med.getSellingPrice(3)<<endl;


    return 0;
}