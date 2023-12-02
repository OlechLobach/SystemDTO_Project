#ifndef PRODUCT_H
#define PRODUCT_H
#include<iostream>
#include <string>
using namespace std;


struct Product {
private:
    string name;
    float weight;
    float price;
    string packaging;

public:
    Product();
    Product(const string& name, float weight, float price, const string& packaging);

    string getName() const;
    float getWeight() const;
    float getPrice() const;
    string getPackaging() const;

    void setName(const string& name);
    void setWeight(float weight);
    void setPrice(float price);
    void setPackaging(const string& packaging);
};

#endif 
