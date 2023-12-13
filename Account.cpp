// Account.cpp

#include <iostream>
#include "Account.h"

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    if (balance >= amount) {
        balance -= amount;
    } else {
        std::cout << "Insufficient funds." << std::endl;
    }
}

void Account::displayInfo() {
    std::cout << "Account ID: " << accountId << std::endl;
    std::cout << "Balance: $" << balance << std::endl;
}
