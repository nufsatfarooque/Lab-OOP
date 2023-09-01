#include<iostream>
#include<string>
using namespace std;

class BankAccount
{
    private:
    int AccNum;
    string AccName;
    string AccType;
    double currentBal;
    double minBal;

    public:
    BankAccount()
    {
    }
    BankAccount(int A, string s, string s1, double b, double b1=1000)
    {
        AccNum=A;
        AccName=s;
        AccType=s1;
        currentBal= b;
        minBal=b1;
    }
    void setValue(int A, string s, string s1, double b, double b1=1000)
    {
        AccNum=A;
        AccName=s;
        AccType=s1;
        currentBal= b;
        minBal=b1;
    }
    void display()
    {
        cout<<"The account number : "<<AccNum<<endl;
        cout<<"The account holder name :"<<AccName<<endl;
        cout<<"The account type is :"<<AccType<<endl;
        cout<<"The current balance is :"<<currentBal<<endl;
        cout<<"The minimum balance is :"<<minBal<<endl;
    }
    void showBalance()
    {
        cout<<"The current balance is :"<<currentBal<<endl;
    }
    void deposit(double n)
    {
        currentBal+=n;
    }
    void withdrawal(double n)
    {
        if((currentBal-n)>=minBal) 
        {
            currentBal-=n;
        }
        else
        {
            cout<<"Insufficient balance"<<endl;
        }
    }
    void giveInterest(double j=3)
    {
        float interest=(currentBal*j)/100;
        interest=interest-((interest*10)/100);
        currentBal+=interest;
    }
    ~BankAccount()
    {
        cout<<"Account of Mr. "<<AccName<<" with account no "<<AccNum<<" is destroyed with a balance BDT "<<currentBal<<endl;
    }

};

int main()
{
    BankAccount b1(10001, "A", "Current", 2000);
    b1.display();

    b1.deposit(2000);
    b1.withdrawal(1000);
    b1.showBalance();

    BankAccount b2;
    b2.setValue(10002, "B", "Savings", 1000);
    b2.withdrawal(500);
    b2.showBalance();
    b2.giveInterest();
    b2.display();


}