#include "Product.h"

Product::Product() {
    name = "Cocain";
    weight = 10.0f;
    price = 50.0f;
    packaging = "Box";
}

Product::Product(const string& name, float weight, float price, const string& packaging) {
    this->name = name;
    this->weight = weight;
    this->price = price;
    this->packaging = packaging;
}

string Product::getName() const {
    return name;
}

float Product::getWeight() const {
    return weight;
}

float Product::getPrice() const {
    return price;
}

string Product::getPackaging() const {
    return packaging;
}

void Product::setName(const string& name) {
    this->name = name;
}

void Product::setWeight(float weight) {
    this->weight = weight;
}

void Product::setPrice(float price) {
    this->price = price;
}

void Product::setPackaging(const string& packaging) {
    this->packaging = packaging;
}