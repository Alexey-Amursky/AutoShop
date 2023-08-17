#ifndef VOLKSMARKET_PRODUCTBUILDER_H
#define VOLKSMARKET_PRODUCTBUILDER_H

#include "../includer.h"
#include "Product.h"

class ProductBuilder {
private:
    Product* product;
public:

    ProductBuilder& SetName(string name) {
        product->setName(name);
        return *this;
    }

    ProductBuilder& SetManufacturer(string manufacturer) {
        product->setManufacturer(manufacturer);
        return *this;
    }

    ProductBuilder& SetCostPrice(double costPrice) {
        product->setCostPrice(costPrice);
        return *this;
    }

    ProductBuilder& SetSalePrice(double salePrice) {
        product->setSalePrice(salePrice);
        return *this;
    }

    ProductBuilder& SetQuantity(int quantity) {
        product->setQuantity(quantity);
        return *this;
    }

    Product Build() {
        return *product;
    }
};


#endif //VOLKSMARKET_PRODUCTBUILDER_H
