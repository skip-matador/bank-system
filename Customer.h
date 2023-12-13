// Customer.h

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
public:
    int customerId;
    std::string name;
    std::string email;

    void displayInfo();
};

#endif
