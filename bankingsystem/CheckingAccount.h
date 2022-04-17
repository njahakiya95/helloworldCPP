#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "BankAccount.h"

class CheckingAccount::public BankAccount {
    //CheckingAccount class attributes 
    protected:
        double minimum_balance  //minimum_balance required to cash a check without incurring a check charge
        double check_charge     //per check fee for a minimum_balance below 1000
        
    public:
        //CheckingAccount constructor 
        CheckingAccount(int act_num = 1234, double checkact_balance = 1000, double charge = 0.5); 
        //CheckingAccount CashCheck method cashes the user input amount given
        void CashCheck(double check_amount); 
}
#endif