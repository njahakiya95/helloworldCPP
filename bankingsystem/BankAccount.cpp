#include "BankAccount.h"
#include <iostream>
using namespace std; 

// BankAccount constructor
BankAccount::BankAccount(string fname, string lname, int act_num, double bal) {
    firstName = fname;
    lastName = lname; 
    act_number = act_num;
    balance = bal; 
}

// BankAccount class method defintions

//Withdraw subtracts a user-input amount from balance
double BankAccount::Wthdraw(double wd_amount) {
    if (balance <= wd_amount) {
        cout << "ERROR: CANNOT WITHDRAW VALUE\n"; 
        cout << "Current balance is less than desired withdraw amount"; 
    }
    else {
        balance -= wd_amount;
        cout << "The new balance is\n"; 
        return balance; 
    }
}

//Deposit adds a user-input amount to balance
void Deposit(dp_amount)  
//double CurrentBalance();            
//int ShowAccountInfo();              