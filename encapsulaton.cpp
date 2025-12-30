#include<iostream>
using namespace std;

class BankAccount
{
    private:
    double balance = 0;

    public:
    void deposit(double amt) 
    {
        balance += amt;
    }
    double getBalance()
    {
        return balance;

    }
        
    
};


int main()
{
    BankAccount acc;
    acc.deposit(500);
    cout << "Balance = " << acc.getBalance();
}
