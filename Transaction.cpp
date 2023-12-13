// Transaction.cpp

#include <iostream>
#include "Transaction.h"

void Transaction::displayInfo() {
    std::cout << "Transaction ID: " << transactionId << std::endl;
    account.displayInfo();
    customer.displayInfo();
    std::cout << "Amount: $" << amount << std::endl;
}
