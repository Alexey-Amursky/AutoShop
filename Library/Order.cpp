#include "Order.h"

Order::Order() {
    _product = nullptr;
    _date = nullptr;
}

Order::Order(Product *product, Date *date) {
    _product = product;
    _date = date;
}

Order::~Order() {}



void Order::PrintCheckToConsole() {
    if(_product->getName() != "") {
        cout << "******* Чек *******" << endl;
        cout << "Товар: " << _product->getName() << endl;
        cout << "Производитель: " << _product->getManufacturer() << endl;
        cout << "Цена: " << _product->getSalePrice() << endl;
        cout << "Колличество: " << _product->getQuantity() << endl;
    }
}
