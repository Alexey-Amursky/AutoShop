#ifndef VOLKSMARKET_PRODUCT_H
#define VOLKSMARKET_PRODUCT_H

#include "../includer.h"

class Product {
private:
    string _name = " ";
    string _manufacturer = " ";
    double _costPrice = 0;
    double _salePrice = 0;
    int _quantity = 0;
public:
    Product() = default;
    Product(const string &name, const string &manufacturer, double costPrice, double salePrice, int quantity) :
    _name(name), _manufacturer(manufacturer), _costPrice(costPrice), _salePrice(salePrice), _quantity(quantity) {};

    Product *Clone(Product* product){
        return new Product(_name, _manufacturer, _costPrice,  _salePrice,  _quantity);
    }

    const string &getName() const {
        return _name;
    }

    const string &getManufacturer() const {
        return _manufacturer;
    }

    double getCostPrice() const {
        return _costPrice;
    }

    double getSalePrice() const {
        return _salePrice;
    }

    int getQuantity() const {
        return _quantity;
    }

    Product setName(const string &name) {
        _name = name;
        return *this;
    }

    Product setManufacturer(const string &manufacturer) {
        _manufacturer = manufacturer;
        return *this;
    }

    Product setCostPrice(double costPrice) {
        _costPrice = costPrice;
        return *this;
    }

    Product setSalePrice(double salePrice) {
        _salePrice = salePrice;
        return *this;
    }

    Product setQuantity(int quantity) {
        _quantity = quantity;
        return *this;
    }
};

using Products = vector<Product*>;

#endif //VOLKSMARKET_PRODUCT_H
