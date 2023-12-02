
#include "Bariga.h"

Barig::Barig() {
    deliveryTime = "3hours";
    deliveryAddress = "Poland, Lodz< stret Kosynieruw Gdynskich 33";
}

Barig::Barig(const string& deliveryTime, const string& deliveryAddress) {
    this->deliveryTime = deliveryTime;
    this->deliveryAddress = deliveryAddress;
}

string Barig::getDeliveryTime() const {
    return deliveryTime;
}

string Barig::getDeliveryAddress() const {
    return deliveryAddress;
}

void Barig::setDeliveryTime(const string& deliveryTime) {
    this->deliveryTime = deliveryTime;
}

void Barig::setDeliveryAddress(const string& deliveryAddress) {
    this->deliveryAddress = deliveryAddress;
}

void Barig::receiveProduct(Product* product) {
    if (product) {
        cout << "Received product: "<< product->getName() << " - Weight : " << product->getWeight() << " - Price : " << product->getPrice() << endl;
    }
    else {
        cout << "No product received." << endl;
    }
}