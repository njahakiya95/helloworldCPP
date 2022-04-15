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
void BankAccount::Deposit(double dp_amount) {
    balance += dp_amount;
    cout << "The new balance is\n" << balance << endl;
} 

//CurrentBalance shows the current account balance
double BankAccount::CurrentBalance() {
    cout << "The current balance is: \n"; 
    return (balance); 
}
          
//ShowAccountInfo displays the first name, last name, and account number
void BankAccount::ShowAccountInfo() {
    cout << "The first name of this account is: " << firstName << endl; 
    cout << "The last name of this account is: " << firstName << endl; 
    cout << "The account number is: " << act_number << endl; 
}          