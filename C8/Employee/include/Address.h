#ifndef ADDRESS_H
#define ADDRESS_H
#include<string>
using namespace std;

class Address
{
    public:
        Address();
        ~Address();

        int Gethouse_no() { return house_no; }
        void Sethouse_no(int val) { house_no = val; }
        int Getroad_no() { return road_no; }
        void Setroad_no(int val) { road_no = val; }
        string Getcity() { return city; }
        void Setcity(string val) { city = val; }
        int Getzip_code() { return zip_code; }
        void Setzip_code(int val) { zip_code = val; }
        string GetDistrict() { return District; }
        void SetDistrict(string val) { District = val; }
        string GetCountry() { return Country; }
        void SetCountry(string val) { Country = val; }

    protected:

    private:
        int house_no;
        int road_no;
        string city;
        int zip_code;
        string District;
        string Country;
};

#endif // ADDRESS_H
