// Account.h

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
public:
    int accountId;
    double balance;

    void deposit(double amount);
    void withdraw(double amount);
    void displayInfo();
};

#endif
