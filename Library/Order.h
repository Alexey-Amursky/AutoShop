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
    Order();
    Order(Product *product, Date *date);
    ~Order();



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

    void PrintCheckToConsole ();
};


#endif
