#include "Account.h"
#include <iostream>


using namespace std;

void promptUser();
void promptUser(){
    cout << "What would you like to do next?" << endl;
}

int main()
{
    Account account1(0.0);
    int a = 1;
    int b = 2;
    int c = 3;
    int d = 4;
    int x;
    
    cout << "Welcome to the main menu." << endl;
    cout << "Please select an option below" << endl;
    cout << "1. Deposit Funds" << endl;
    cout << "2. Withdraw Funds" << endl;
    cout << "3. Check Balance" << endl;
    cout << "4. Exit" << endl;
    
    cin >> x;

    if(x != a && x != b && x != c && x != d){
        cout << "Error: please enter a valid entry" << endl;
    }
    else{
    while(x == a || x == b || x == c || x == d){
        if(x == a){
            double m;
            account1.makeDeposit(m);
            account1.displayBalance();
            promptUser();
            cin >> x;
        }
    
        else if(x == b){
            double w;
            account1.makeWithdraw(w);
            account1.displayBalance();
            promptUser();
            cin >> x;
        }
        
        else if(x == c){
            account1.displayBalance();
            promptUser();
            cin >> x;
        }
        else if(x == d){
            break;
        }
    }
    }
    return 0;
}