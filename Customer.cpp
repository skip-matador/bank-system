// Customer.cpp

#include <iostream>
#include "Customer.h"

void Customer::displayInfo() {
    std::cout << "Customer ID: " << customerId << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Email: " << email << std::endl;
}
