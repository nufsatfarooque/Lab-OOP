#ifndef CONTACT_INFO_H
#define CONTACT_INFO_H
#include<string>
#include<iostream>

using namespace std;

class Contact_Info
{
    public:
        Contact_Info();
        ~Contact_Info();

        string Getprim_phone_num() { return prim_phone_num; }
        void Setprim_phone_num(string val) { prim_phone_num = val; }
        string Getsec_phone_num() { return sec_phone_num; }
        void Setsec_phone_num(string val) { sec_phone_num = val; }
        string Getemail() { return email; }
        void Setemail(string val) { email = val; }

    protected:

    private:
        string prim_phone_num;
        string sec_phone_num;
        string email;
};

#endif // CONTACT_INFO_H
