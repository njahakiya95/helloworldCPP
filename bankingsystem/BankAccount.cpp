#include "BankAccount.h"
using namespace std; 

// BankAccount constructor
BankAccount::BankAccount(string fname, string lname, int act_num, double bal) {
    firstName = fname;
    lastName = lname; 
    act_number = act_num;
    balance = bal; 
}

// BankAccount class method defintions
double Wthdraw(double wd_amount);  
void Deposit(double dp_amount);     
double CurrentBalance();            
int ShowAccountInfo();              