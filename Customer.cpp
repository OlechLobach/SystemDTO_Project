#include "Customer.h"

Customer::Customer() {
    initials = "Jack";
    phoneNumber = "+1099203891274";
    deliveryAddress = "Poalnd, stret Kosynieruw Gdynskich 33";
}

Customer::Customer(const std::string& initials, const std::string& phoneNumber, const std::string& deliveryAddress) {
    this->initials = initials;
    this->phoneNumber = phoneNumber;
    this->deliveryAddress = deliveryAddress;
}

std::string Customer::getInitials() const {
    return initials;
}

std::string Customer::getPhoneNumber() const {
    return phoneNumber;
}

std::string Customer::getDeliveryAddress() const {
    return deliveryAddress;
}

void Customer::setInitials(const std::string& initials) {
    this->initials = initials;
}

void Customer::setPhoneNumber(const std::string& phoneNumber) {
    this->phoneNumber = phoneNumber;
}

void Customer::setDeliveryAddress(const std::string& deliveryAddress) {
    this->deliveryAddress = deliveryAddress;
}

void Customer::receiveProduct(Product* product) {
    if (product) {
        std::cout << "Received product: " << product->getName() << std::endl;
    }
    else {
        std::cout << "No product received." << std::endl;
    }
}

float Customer::makePayment(float amount, float productPrice) {
    float change = 0.0f;
    if (amount >= productPrice) {
        change = amount - productPrice;
        std::cout << "Payment successful. Your change: " << change << std::endl;
    }
    else {
        std::cout << "Insufficient payment. Payment failed." << std::endl;
    }
    return change;
}