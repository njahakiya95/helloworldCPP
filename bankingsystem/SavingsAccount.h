#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "BankAccount.h"

class SavingsAccount:public BankAccount {
    //SavingsAccount class attributes 
    protected:
        double interestRate; 
    
    //SavingsAccount class methods
    public:
        //SavingsAccount constructor
        SavingsAccount(int act_num = 1234, double savact_balance = 0, double int_rate = 5.0); 
        //AddInterest method adds interest to the user's account 
        void AddInterest(); 
};
#endif