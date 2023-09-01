#include<bits/stdc++.h>
using namespace std;

class Product
{
    private:
    string name;
    int id;
    int price;
    int quantity;
    bool availabilityStatus;
    static double value;
    public:
    int maxQuantity;
    Product()
    {}
    Product(string n, int i, int p=0, int q=0)
    {
        name=n;
        id=i;
        price=p;
        quantity=q;
        if(q>0)
        {
            availabilityStatus=true;
        }
        else
        {
            availabilityStatus=false;
        }
    }
    void setValue(string n, int i, int p=0, int q=0)
    {
        name=n;
        id=i;
        price=p;
        quantity=q;
        if(q>0)
        {
            availabilityStatus=true;
        }
        else
        {
            availabilityStatus=false;
        }
    }
    string getName()
    {
        return name;
    }
    int getID()
    {
        return id;
    }
    double getPrice()
    {
        return price;
    }
    int getQuantity()
    {
        return quantity;
    }
    void setMaxQuantity(int qty)
    {
        maxQuantity=qty;
    }
    void addToInventory(int added_quantity)
    {
        if((added_quantity+quantity)<=maxQuantity)
        {
            quantity+=added_quantity;
        }
    }
    bool isAvailable()
    {
        if(quantity>0) return true;
        else return false;
    }
    void purchase(int purchased_quantity)
    {
        if(purchased_quantity<=quantity)
        {
            quantity-=purchased_quantity;
        }
    }
    int updatePrice(int percent)
    {
        return price+=((price*percent)/100);
    }
    void displayInventoryValue()
    {
        cout<<"Total value ="<<quantity*price<<endl;
        value+=quantity*price;
    }
    void displayDetails()
    {
        cout<<"Name ="<<name<<endl;
        cout<<"ID ="<<id<<endl;
        cout<<"Price ="<<price<<endl;
        cout<<"Quantity ="<<quantity<<endl;
        cout<<"Availability ="<<availabilityStatus<<endl;
    }
    void displayTotalInventoryValue()   
    {
        cout<<"Total value of all products ="<<value<<endl;
    }
    ~Product()
    {
        cout<<"Obj destroyed"<<endl;
    }

};

double Product:: value=0;

int main()
{
    Product p1("A", 101, 10, 10);
    p1.setMaxQuantity(20);
    p1.addToInventory(10);
    cout<<"Toatal Quantity :"<<p1.getQuantity()<<endl;
    cout<<"Availability "<<p1.isAvailable()<<endl;
    p1.purchase(10);
    cout<<"Toatal Quantity :"<<p1.getQuantity()<<endl;
    cout<<"update price :"<<p1.updatePrice(10)<<endl;
    p1.displayInventoryValue();
   
    Product p2;
    p2.setValue("B", 102, 20, 30);
    p2.setMaxQuantity(100);
    p2.addToInventory(10);
    cout<<"Toatal Quantity :"<<p2.getQuantity()<<endl;
    cout<<"Availability "<<p2.isAvailable()<<endl;
    p2.purchase(10);
    cout<<"Toatal Quantity :"<<p2.getQuantity()<<endl;
    cout<<"update price :"<<p2.updatePrice(10)<<endl;
    p2.displayInventoryValue();

    Product p3;
    p3.setValue("C", 103);
    p3.displayDetails();

    p3.displayTotalInventoryValue();

    return 0;
}