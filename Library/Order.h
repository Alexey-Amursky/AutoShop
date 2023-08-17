#ifndef VOLKSMARKET_ORDER_H
#define VOLKSMARKET_ORDER_H

#include "../includer.h"
#include "Product.h"
#include "Client.h"
#include "Date.h"
#include "Address.h"

enum PaymentMethod {
    CASH,
    CARD,
    CASHLESS_PAYMENT
};
class Order {
private:
    Product* _product;
    Client* _client;
    Date* _date;
    Address* _address;
    PaymentMethod _paymentMethod;
public:
    Order(Product *product, Client *client, Date *date, Address *adress, PaymentMethod paymentMethod) :
    _product(product), _client(client), _date(date), _address(adress), _paymentMethod(paymentMethod) {};

    Product *getProduct() const {
        return _product;
    }



    Client *getClient() const {
        return _client;
    }

    Date *getDate() const {
        return _date;
    }

    Address *getAddress() const {
        return _address;
    }

    PaymentMethod getPaymentMethod() const {
        return _paymentMethod;
    }

    void setProduct(Product *product) {
        Order::_product = product;
    }

    void setClient(Client *client) {
        Order::_client = client;
    }

    void setDate(Date *date) {
        Order::_date = date;
    }

    void setAddress(Address *adress) {
        Order::_address = adress;
    }

    void setPaymentMethod(PaymentMethod paymentMethod) {
        Order::_paymentMethod = paymentMethod;
    }

 /*   Order* AddProductToOrder (Product* product){
        return new Product(string name, string manufacturer, string &description, double costPrice, double salePrice, int quantity);
    }*/

    void removeProductFromOrder(Product* product) {
        if (this->_product == product) {
            this->_product = nullptr;
        }
    }
};


#endif
