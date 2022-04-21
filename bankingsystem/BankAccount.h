#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount
{
    //BankAccount class attributes 
    protected:
        int act_number;     //stores account number
        double balance;     //stores account balance
    
    //BankAccount class method declarations  
    public:
        //BankAccount class method declarations
        double Withdraw(double wd_amount);   //Withdraw subtracts a user-input amount from balance
        void Deposit(double dp_amount);     //Deposit adds a user-input amount to balance
        double CurrentBalance();            //CurrentBalance shows the current account balance
        void ShowAccountInfo();              //ShowAccountInfo displays the first name, last name, and account number
}; 

#endif