#include "Baron.h"

Baron::Baron() {
    customerName = "Jack Wolfskin";
    orderedItem = "Cocain";
    deliveryAddressFrom = "Vinnitsa, street Tymofiivska 90";
    deliveryAddressTo = "Poland, Lodz< stret Kosynieruw Gdynskich 33";
}

Baron::Baron(const string& customerName, const string& orderedItem, const string& deliveryAddressFrom, const string& deliveryAddressTo) {
    this->customerName = customerName;
    this->orderedItem = orderedItem;
    this->deliveryAddressFrom = deliveryAddressFrom;
    this->deliveryAddressTo = deliveryAddressTo;
}

string Baron::getCustomerName() const {
    return customerName;
}

string Baron::getOrderedItem() const {
    return orderedItem;
}

string Baron::getDeliveryAddressFrom() const {
    return deliveryAddressFrom;
}

string Baron::getDeliveryAddressTo() const {
    return deliveryAddressTo;
}

void Baron::setCustomerName(const string& customerName) {
    this->customerName = customerName;
}

void Baron::setOrderedItem(const string& orderedItem) {
    this->orderedItem = orderedItem;
}

void Baron::setDeliveryAddressFrom(const string& deliveryAddressFrom) {
    this->deliveryAddressFrom = deliveryAddressFrom;
}

void Baron::setDeliveryAddressTo(const string& deliveryAddressTo) {
    this->deliveryAddressTo = deliveryAddressTo;
}
