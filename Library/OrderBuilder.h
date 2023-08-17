#ifndef VOLKSMARKET_ORDERBUILDER_H
#define VOLKSMARKET_ORDERBUILDER_H

#include "../includer.h"
#include "Order.h"

class OrderBuilder {
private:
    Order* _order;
public:

    explicit OrderBuilder(Order *order) : _order(order) {}

    OrderBuilder& SetProduct(Product* product) {
        _order->setProduct(product);
        return *this;
    }

    OrderBuilder& SetClient(Client* client) {
        _order->setClient(client);
        return *this;
    }

    OrderBuilder& SetDate(Date* date) {
        _order->setDate(date);
        return *this;
    }

    OrderBuilder& SetAddress(Address* address) {
        _order->setAddress(address);
        return *this;
    }

    OrderBuilder& SetPaymentMethod(PaymentMethod paymentMethod) {
        _order->setPaymentMethod(paymentMethod);
        return *this;
    }

/*    Order Build() {
        return new *_order;
    }*/
};


#endif //VOLKSMARKET_ORDERBUILDER_H
