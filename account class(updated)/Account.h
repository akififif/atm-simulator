#include <iostream>
#include <string>
using namespace std;
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account{
    private:
        int accountNumber;
        string name;
        double balance;
        
    public:
        Account();
        Account(double y);
        double getBalance();
        void displayBalance();
        void makeWithdraw(double w);
        void makeDeposit(double m);
        bool checkWithdraw(double w);
        
};
#endif