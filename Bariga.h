#ifndef BARIG_H
#define BARIG_H
#include<iostream>
#include <string>
#include "Product.h"
using namespace std;

struct Barig {
private:
    string deliveryTime;
    string deliveryAddress;

public:
    Barig();
    Barig(const string& deliveryTime, const string& deliveryAddress);

    string getDeliveryTime() const;
    string getDeliveryAddress() const;

    void setDeliveryTime(const string& deliveryTime);
    void setDeliveryAddress(const string& deliveryAddress);

    void receiveProduct(Product* product);
};

#endif 
