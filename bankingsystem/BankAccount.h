#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

class BankAccount {
//BankAccount class attributes 
protected:
    int act_number;            //stores account number 
    float act_balance;      //stores account balance

//BankAccount class constructor and method definitions 
public:
    BankAccount::BankAccount(int act_number, float act_balance);   //class constructor
    void deposit(float dep_amount);                             //deposit() method is used to deposit money to act_balance
    int get_act_number const;                                   //get_act_number() method is used to retrieve the act_number
    float get_act_balance const;                                //get_act_balance() method is used to retrieve the act_balance 
    
    
}