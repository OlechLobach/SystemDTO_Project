    #ifndef DTO_H
    #define DTO_H

    #include "Baron.h"
    #include "Bariga.h"
    #include "Customer.h"
    #include "Product.h"

    struct DTO {
        Baron* baron;
        Barig* barig;
        Customer* customer;
        Product* product;

        DTO(Baron* baron, Barig* barig, Customer* customer, Product* product) {
            this->baron = baron;
            this->barig = barig;
            this->customer = customer;
            this->product = product;
        }

        void transferProduct() {
            barig->receiveProduct(product);
        }

        void deliverProduct() {
            customer->receiveProduct(product);
        }

        float receivePayment(float amount) {
            return customer->makePayment(amount, product->getPrice());
        }
    };

    #endif 
