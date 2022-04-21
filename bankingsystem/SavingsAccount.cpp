#include "SavingsAccount.h"
#include <iostream>

using namespace std; 

//SavingsAccount constructor 
SavingsAccount::SavingsAccount(int act_num, double savact_bal, double int_rate) {
    act_number = act_num; 
    balance = savact_bal;
    interestRate = int_rate; 
}

//AddInterest method 
void SavingsAccount::AddInterest() {
    double interest; 
    
    interest = balance * (interestRate / 1200); 
    balance += interest; 
}