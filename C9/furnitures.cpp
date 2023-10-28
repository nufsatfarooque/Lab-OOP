#include <iostream>
#include <string>
using namespace std;

enum class Material {Wood,Board,Steel,foam};
class Furniture
{
protected:
    double price;
    double discount;
    Material madeof;
    string name;
public:

    Furniture(double p,double d,Material m, string s):price(0),discount(0),madeof(Material::Wood), name("")
    {
        setPrice(p);
        setDiscount(d);
        setMadeof(m);
        setname(s);
    }
    void setPrice(double val)
    {
        if(val>0)
            price=val;
    }
    void setDiscount(double val)
    {
        if(val<=price)
            discount=val;
    }
    void setDiscountPercentage(float f)
    {
        float p=getPrice();
        setDiscount((p*f)/100);
    }
    void setMadeof(Material val)
    {
        madeof=val;
    }
    double getPrice()
    {
        return price;
    }
    double getDiscount()
    {
        return price-discount;
    }
    string getMadeof()
    {
        if(madeof==Material::Wood)
            return string("Wood");
        else if(madeof==Material::Board)
            return string("Board");
        else if(madeof==Material::Steel)
            return string("Steel");
        else
            return string("");
    }
    void setname(string s)
    {
        name=s;
    }
    string getname()
    {
        return name;
    }
    virtual void productDetails()=0;
};



enum class BedSize {Single,SemiDouble,Double};

class Bed:public Furniture
{
private:
    BedSize size_bed;

public:
    Bed(double p,double d,Material m, string s, BedSize b):Furniture(p,d,m,s), size_bed(b)
    {

    }
    void setBedSize(BedSize b)
    {
        size_bed=b;
    }
    string getBedSize()
    {
        if(size_bed==BedSize::Single)
            return string("Single");
        else if(size_bed==BedSize::SemiDouble)
            return string("SemiDouble");
        else if(size_bed==BedSize::Double)
            return string("Double");
        else
            return string("");
    }

    void productDetails()
    {
        cout<<"Name: "<<getname()<<endl;
        cout<<"Regular Price: "<<getPrice()<<endl;
        cout<<"Discounted Price: "<<getDiscount()<<endl;
        cout<<"Material: "<<getMadeof()<<endl;
        cout<<"Bed Size: "<<getBedSize()<<endl;
    }

};
enum class SofaSize {One, Two, Three, Four, Five};
class Sofa:public Furniture
{
    //Furniture *f;
   // void a()
    //{
      //  f = new Bed();
    //}
private:
    SofaSize seat_no;

public:
    Sofa(double p,double d,Material m, string n, SofaSize s):Furniture(p,d,m,n), seat_no(s)
    {

    }
    void setSeatNum(SofaSize s)
    {
        seat_no=s;
    }
    string getSeatNum()
    {
        if(seat_no==SofaSize::One)
            return string("One");
        else if(seat_no==SofaSize::Two)
            return string("Two");
        else if(seat_no==SofaSize::Three)
            return string("Three");
        else if(seat_no==SofaSize::Four)
            return string("Four");
        else if(seat_no==SofaSize::Five)
            return string("Five");
        else
            return string("");
    }

    void productDetails()
    {
        cout<<"Name: "<<getname()<<endl;
        cout<<"Regular Price: "<<getPrice()<<endl;
        cout<<"Discounted Price: "<<getDiscount()<<endl;
        cout<<"Material: "<<getMadeof()<<endl;
        cout<<"Seat Number: "<<getSeatNum()<<endl;
    }
    ~Sofa()
    {
       // delete f;
    }
};
enum class DiningTableSize{Two, Four, Six};
class DiningTable:public Furniture
{
private:
    DiningTableSize chair_c;

public:
    DiningTable(double p,double d,Material m,string s, DiningTableSize c):Furniture(p,d,m,s), chair_c(c)
    {

    }
    string getChairCount()
    {
        if(chair_c==DiningTableSize::Two)
            return string("Two");
        else if(chair_c==DiningTableSize::Four)
            return string("Four");
        else if(chair_c==DiningTableSize::Six)
            return string("Six");
        else
            return string("");
    }

    void productDetails()
    {
        cout<<"Name: "<<getname()<<endl;
        cout<<"Regular Price: "<<getPrice()<<endl;
        cout<<"Discounted Price: "<<getDiscount()<<endl;
        cout<<"Material: "<<getMadeof()<<endl;
        cout<<"Chair count: "<<getChairCount()<<endl;
    }
};

/**task 4
sort_furniture_discount will sort the array in descending order based on their discount price.
You may need to add some member functions
**/
void sort_furniture_discount(Furniture *furnitures[],int no_of_furnitures)
{
    for(int i=0; i<no_of_furnitures; i++)
    {
        for(int j=i+1; j<no_of_furnitures; j++)
        {
            if(furnitures[i]->getDiscount()<furnitures[j]->getDiscount())
            {
                Furniture *p= furnitures[i];
                furnitures[i]=furnitures[j];
                furnitures[j]=p;
            }
        }
    }
};


int main()
{
    Furniture* f_list[100];

    /**
        task 1
        So that following lines can be executed without error
    */
    f_list[0] = new Bed(10000,123,Material::Wood, "Bed001",BedSize::Single);
    f_list[1] = new Sofa(11000,234,Material::Steel, "Sofa001", SofaSize::Five);
    f_list[2] = new DiningTable(13000,345,Material::Wood, "Dining Table001", DiningTableSize::Four);
    f_list[3] = new Bed(10090,123,Material::Wood, "Bed002", BedSize::Single);

    /**task 1 ends here*/

    /**
        task 2
        So that following lines can be executed without error

        task 3 (Modify productDetails)
    */
    f_list[2]->setDiscountPercentage(30);
    f_list[0]->setname("Bed001");
    for(int i=0; i<4; i++)
    {
        cout<<"____________________________________________________"<<endl;
        f_list[i]->productDetails();
        cout<<"#####################################################"<<endl;
    }

    /**task 2 ends here*/
    /**task 3 ends here*/

    /**task 4
    So that following lines can be executed without error
    */
    sort_furniture_discount(f_list,4);
    cout<<"SORTED LIST: "<<endl;
    for(int i=0; i<4; i++)
    {
        cout<<"____________________________________________________"<<endl;
        f_list[i]->productDetails();
        cout<<"#####################################################"<<endl;
    }
    /**task 4 ends here*/

}
