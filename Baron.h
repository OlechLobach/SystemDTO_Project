#ifndef BARON_H
#define BARON_H
#include<iostream>
#include <string>
using namespace std;

struct Baron {
private:
    string customerName;
    string orderedItem;
    string deliveryAddressFrom;
    string deliveryAddressTo;

public:
    Baron();
    Baron(const string& customerName, const string& orderedItem, const string& deliveryAddressFrom, const string& deliveryAddressTo);

    string getCustomerName() const;
    string getOrderedItem() const;
    string getDeliveryAddressFrom() const;
    string getDeliveryAddressTo() const;

    void setCustomerName(const string& customerName);
    void setOrderedItem(const string& orderedItem);
    void setDeliveryAddressFrom(const string& deliveryAddressFrom);
    void setDeliveryAddressTo(const string& deliveryAddressTo);
};

#endif 

