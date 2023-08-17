#ifndef VOLKSMARKET_PRODUCT_H
#define VOLKSMARKET_PRODUCT_H

#include "../includer.h"

class Product {
private:
    string _name;
    string _manufacturer;
    double _costPrice;
    double _salePrice;
    int _quantity;
public:
    Product();
    Product(const string &name, const string &manufacturer, double costPrice, double salePrice, int quantity);
    ~Product();

    void Print();
    void SetParametres (string name, string manufacturer, double costPrice, double salePrice, int quantity);

    Product *Clone(Product* product);

#pragma region GettersAndSetters;
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

#pragma endregion;

    void AddToFileForRead(string path);
    void AddToFileForWrite(string path);
};

using Products = vector<Product*>;

#endif //VOLKSMARKET_PRODUCT_H
