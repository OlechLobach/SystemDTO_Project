#include <iostream>
#include "Baron.h"
#include "Bariga.h"
#include "Customer.h"
#include "Product.h"
#include "DTO.h"

int main() {
    Baron* baron = new Baron("CustomerName", "OrderedItem", "DeliveryFrom", "DeliveryTo");
    Barig* barig = new Barig("DeliveryTime", "DeliveryPlace");
    Customer* customer = new Customer("Initials", "PhoneNumber", "DeliveryAddress");
    Product* product = new Product("ProductName", 50.0, 100.0, "Packaging");

    DTO* dto = new DTO(baron, barig, customer, product);

    dto->transferProduct();
    dto->deliverProduct();

    float payment = dto->receivePayment(100.0);
    cout << "Received payment: " << payment << endl;
    product = new Product("Product", 50.0, 100.0, "Packaging");
    cout << "Product Name: " << product->getName() << endl;
    cout << "Product Weight: " << product->getWeight() << endl;
    cout << "Product Price: " << product->getPrice() << endl;
    cout << "Product Packaging: " << product->getPackaging() << endl;

    

    delete baron;
    delete barig;
    delete customer;
    delete product;
    delete dto;

    return 0;
}
