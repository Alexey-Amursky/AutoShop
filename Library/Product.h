#ifndef VOLKSMARKET_PRODUCT_H
#define VOLKSMARKET_PRODUCT_H

#include "../includer.h"

class Product {
private:
    int _id;
    string _name;
    string _manufacturer;
    double _costPrice;
    double _salePrice;
    int _quantity;
public:
    Product();
    Product(int id, const string &name, const string &manufacturer, double costPrice, double salePrice, int quantity);
    ~Product();

    void PrintToConsole();

    void SetParametres (int id, string name, string manufacturer, double costPrice, double salePrice, int quantity);

    Product *Clone(Product* product);

#pragma region GettersAndSetters;

    int GetId() {
        return _id;
    }

    const string &GetName() const {
        return _name;
    }

    const string &GetManufacturer() const {
        return _manufacturer;
    }

    double GetCostPrice() const {
        return _costPrice;
    }

    double GetSalePrice() const {
        return _salePrice;
    }

    int GetQuantity() const {
        return _quantity;
    }

    Product SetId(int id) {
        _id = id;
        return *this;
    }

    Product SetName(const string &name) {
        _name = name;
        return *this;
    }

    Product SetManufacturer(const string &manufacturer) {
        _manufacturer = manufacturer;
        return *this;
    }

    Product SetCostPrice(double costPrice) {
        _costPrice = costPrice;
        return *this;
    }

    Product SetSalePrice(double salePrice) {
        _salePrice = salePrice;
        return *this;
    }

    Product SetQuantity(int quantity) {
        _quantity = quantity;
        return *this;
    }

#pragma endregion;

    void AddToFileForRead(string path);
    void AddToFileForWrite(string path);
};

using Products = vector<Product*>;

#endif //VOLKSMARKET_PRODUCT_H
