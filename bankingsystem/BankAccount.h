#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <string>

class BankAccount
{
    //BankAccount class attributes 
    protected:
        string firstName;   //stores first name
        string lastName;    //stores last name
        int act_number;     //stores account number
        double balance;     //stores account balance
    
    //BankAccount class method definitions 
    public:
        double Wthdraw(double wd_amount);   //Withdraw subtracts a user-input amount from balance
        void Deposit(double dp_amount);     //Deposit adds a user-input amount to balance
        double CurrentBalance();            //CUrrentBalance shows the current account balance
        int ShowAccountInfo();              //ShowAccountInfo displays the first name, last name, and account number
}; 

#endif