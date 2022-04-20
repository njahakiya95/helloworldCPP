#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <string>

class BankAccount
{
    //BankAccount class attributes 
    protected:
        std::string firstName;   //stores first name
        std::string lastName;    //stores last name
        int act_number;     //stores account number
        double balance;     //stores account balance
    
    //BankAccount class method declarations  
    public:
        //BankAccount class method declarations
        double Wthdraw(double wd_amount);   //Withdraw subtracts a user-input amount from balance
        void Deposit(double dp_amount);     //Deposit adds a user-input amount to balance
        double CurrentBalance();            //CurrentBalance shows the current account balance
        void ShowAccountInfo();              //ShowAccountInfo displays the first name, last name, and account number
}; 

#endif