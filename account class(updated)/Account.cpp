#include "Account.h"
using namespace std;

Account::Account(){
    balance = 0.0;
}

Account::Account(double y){
    balance = y;
}

double Account::getBalance(){
    return balance;
}

void Account:: displayBalance(){
    cout << "Your current balance is: $" << balance << endl;
}

void Account:: makeDeposit(double m){
    cout << "Deposit Funds selected" << endl;
    cout << "Enter deposit amount: " << endl;
    cin >> m;
    cout << "$" << m << " has been deposited" << endl;
    balance += m;
}

bool Account:: checkWithdraw(double w){
    if(w>balance){
        return false;
    }
    else{
        return true;
    }

}

void Account:: makeWithdraw(double w){
    cout << "Withdraw Funds selected" << endl;
    cout << "Enter withdraw amount: " << endl;
    cin >> w;
    if(checkWithdraw(w)){
        cout << "$" << w << " has been withdrawn" << endl;
        balance-=w;
    }
    else{
        cout << "Error: Withdraw amount exceeds balance. Unable to make withdrawal" << endl;
    }
}







