#include <bits/stdc++.h>
using namespace std;

struct product
{
    string product_name;
    int quantity;
    double price;
};
class Category
{
private:
    string category_name;
    int id;
    vector<product> pro;
    bool discount;
    static double value;

public:
    Category()
    {
        discount = true;
    }
    Category(string n, int i)
    {
        category_name = n;
        id = i;
        discount = true;
    }
    void addProduct(string product_name, int quantity = 0, double price = 0)
    {
        product p;
        p.product_name = product_name;
        p.quantity = quantity;
        p.price = price;
        pro.push_back(p);
    }

    void addToInventory(string p, int added_quantity)
    {
        int temp = 0;
        for (int i = 0; i < pro.size(); i++)
        {
            if (pro[i].product_name == p)
            {
                pro[i].quantity += added_quantity;
                temp = 1;
                break;
            }
        }
        if (temp == 0)
            cout << "Product not found" << endl;
    }

    void purchase(string p, int purchased_quantity)
    {
        int temp = 0;
        for (int i = 0; i < pro.size(); i++)
        {
            if (pro[i].product_name == p)
            {
                pro[i].quantity -= purchased_quantity;
                temp = 1;
                break;
            }
        }
        if (temp == 0)
            cout << "Product not found" << endl;
    }

    void applyCategoryDiscount(float percent)
    {
        int temp = 0;
        for (int i = 0; i < pro.size(); i++)
        {
            temp = 1;
            pro[i].price -= pro[i].price * (percent / 100);
        }
        if (temp == 0)
        {
            cout << "Product not found" << endl;
        }
        discount = false;
    }
    void applyProductDiscount(string j, float percent)
    {
        if (discount == true)
        {
            int temp = 0;
            for (int i = 0; i < pro.size(); i++)
            {
                if (pro[i].product_name == j)
                {
                    temp = 1;
                    pro[i].price -= pro[i].price * (percent / 100);
                    break;
                }
            }
            if (temp == 0)
            {
                cout << "Product not found" << endl;
            }
        }
    }
    int updatePrice(string s, int percent)
    {
        int temp = 0;
        for (int i = 0; i < pro.size(); i++)
        {
            if (pro[i].product_name == s)
            {
                temp = 1;
                pro[i].price += pro[i].price * (percent / 100);
                return pro[i].price;
            }
        }
        if (temp == 0)
        {
            cout << "Product not found" << endl;
        }
    }
    float displayInventoryValue(string s)
    {
        int temp = 0;
        for (int i = 0; i < pro.size(); i++)
        {
            if (pro[i].product_name == s)
            {
                temp = 1;
                return pro[i].price * pro[i].quantity;
            }
        }
        if (temp == 0)
        {
            cout << "Product not found" << endl;
        }
    }

    void getTotalInventoryValue()
    {
        for (int i = 0; i < pro.size(); i++)
        {
            value += pro[i].quantity * pro[i].price;
        }
        cout << "Total value of all products =" << value << endl;
    }
    ~Category()
    {
        cout<<"*************************************"<<endl;
        cout << "Category_name =" << category_name << endl;
        cout << "ID =" << id << endl;
        for (int i = 0; i < pro.size(); i++)
        {
            cout << "Product Name :" << pro[i].product_name << endl;
            cout << "Product Quantity :" << pro[i].quantity << endl;
            cout << "Product Price :" << pro[i].price << endl;
        }
    }
};

double Category::value = 0;

int main()
{
    cout<<"Category 1"<<endl;
    Category category1("Electronics", 1);
    category1.addProduct("Laptop", 5, 1000);
    category1.addProduct("Phone", 10, 500);
    category1.addToInventory("Phone", 20);

    cout<<"Category 2"<<endl;
    Category category2("Clothing", 2);
    category2.addProduct("Shirt", 50, 20);
    category2.addProduct("Jeans", 30, 30);

    cout<<"Category 3"<<endl;
    Category category3("Books", 3);
    category3.addProduct("Python Programming", 20, 25);
    category3.addProduct("Data Science Handbook", 15, 30);

    category1.purchase("Laptop", 2);
    category2.applyCategoryDiscount(10);
    category3.applyProductDiscount("Python Programming", 15);
    category1.updatePrice("Phone", 5);

    category1.getTotalInventoryValue();
    cout<<"Category 2 value :"<<category2.displayInventoryValue("Shirt")<<endl;
    category3.getTotalInventoryValue();


    return 0;
}