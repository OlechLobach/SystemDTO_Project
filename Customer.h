#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<iostream>
#include <string>
#include "Product.h"
using namespace std;

struct Customer {
private:
    string initials;
    string phoneNumber;
    string deliveryAddress;

public:
    Customer();
    Customer(const string& initials, const string& phoneNumber, const string& deliveryAddress);

    string getInitials() const;
    string getPhoneNumber() const;
    string getDeliveryAddress() const;

    void setInitials(const string& initials);
    void setPhoneNumber(const string& phoneNumber);
    void setDeliveryAddress(const string& deliveryAddress);

    void receiveProduct(Product* product);
    float makePayment(float amount, float productPrice);
};

#endif 
