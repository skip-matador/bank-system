// BankingSystem.cpp

#include "Account.h"
#include "Customer.h"
#include "Transaction.h"

int main() {
    // Create accounts
    Account account1;
    account1.accountId = 1;
    account1.balance = 1000.0;

    // Create customers
    Customer customer1;
    customer1.customerId = 101;
    customer1.name = "Alice";
    customer1.email = "alice@example.com";

    // Create transactions
    Transaction transaction1;
    transaction1.transactionId = 1001;
    transaction1.account = account1;
    transaction1.customer = customer1;
    transaction1.amount = 500.0;

    // Display information
    std::cout << "Transaction Information:" << std::endl;
    transaction1.displayInfo();

    return 0;
}
