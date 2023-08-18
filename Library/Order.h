#ifndef VOLKSMARKET_ORDER_H
#define VOLKSMARKET_ORDER_H

#include "../includer.h"
#include "Product.h"

class Order {
private:
    int _numberOrder;
    Product* _product;
    string _date;
public:
    Order();
    Order(int num, Product *product, string date);
    ~Order();

    void AddToHistory (Order* order, string path);

    void PrintHistory (string path);

#pragma region GettersAndSetters

    Product* GetProduct() const {
        return _product;
    }

    string GetDate() const {
        return _date;
    }

    Order SetProduct(Product *product) {
        Order::_product = product;
        return *this;
    }

    Order SetDate(string date) {
        Order::_date = date;
        return *this;
    }

#pragma endregion;

    void PrintCheckToConsole ();

    void PrintCheckToFile(string path);
};


#endif
