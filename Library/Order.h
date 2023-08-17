#ifndef VOLKSMARKET_ORDER_H
#define VOLKSMARKET_ORDER_H

#include "../includer.h"
#include "Product.h"
#include "Date.h"

class Order {
private:
    Product* _product;
    Date* _date;
public:
    Order(Product *product, Date *date) :
    _product(product), _date(date) {};

    Product *getProduct() const {
        return _product;
    }

    Date *getDate() const {
        return _date;
    }

    void setProduct(Product *product) {
        Order::_product = product;
    }

    void setDate(Date *date) {
        Order::_date = date;
    }

    Order* AddProductToOrder (Product* product){
        return new Product( _name, string manufacturer, double costPrice, double salePrice, int quantity);
    }

    void removeProductFromOrder(Product* product) {
        if (this->_product == product) {
            this->_product = nullptr;
        }
    }
};


#endif
