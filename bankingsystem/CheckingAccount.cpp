#include "CheckingAccount.h"
#include <iostream>
using namespace std;

//CheckingAccount constructor 
CheckingAccount::CheckingAccount(int act_num, double checkact_balance, double min_balance, double charge) {
    act_number = act_num;
    balance = checkact_balance;
    minimum_balance = min_balance; 
    check_charge = charge; 
}

//CashCheck method 
void CheckingAccount::CashCheck(double check_amount) {
    if (check_amount > balance) {
        cout << "ERROR! Account Overdrawn. Please enter a value less than balance amount" << endl; 
    }
    else {
        if (balance < minimum_balance) {
            balance -= check_amount + check_charge;      //Withdraw check plus check_charge 
        }
        else {
            balance -= check_amount;                    //Withdraw check from balance 
        }
    }
}
