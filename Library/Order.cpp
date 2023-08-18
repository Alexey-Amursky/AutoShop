#include "Order.h"

Order::Order() {
    _numberOrder = 0;
    _product = nullptr;
    _date = "";
}

Order::Order(int num, Product *product, string date) {
    _numberOrder = num;
    _product = product;
    _date = date;
}

Order::~Order() {}

void Order::AddToHistory(Order *order, string path) {
    ofstream fout(path, ios::app);
    if(!fout.is_open()) {
        cerr << "Не удалось открыть файл!";
    } else {
        fout << "Номер заказа: " << order->_numberOrder << endl;
        _product->AddToFileForRead(path);
    }
    fout.close();
}

void Order::PrintHistory(string path) {

}

void Order::PrintCheckToConsole() {
    if(_product->GetName() != "") {
        cout << "******* Чек *******" << endl;
        cout << "" << _product->GetId() << endl;
        cout << "Товар: " << _product->GetName() << endl;
        cout << "Производитель: " << _product->GetManufacturer() << endl;
        cout << "Цена: " << _product->GetSalePrice() << endl;
        cout << "Количество: " << _product->GetQuantity() << endl;
    }
}

void Order::PrintCheckToFile(string path) {
    ofstream fout(path);
    if(!fout.is_open()){

    } else {
        fout << "******* Чек *******" << endl;
        fout << "Товар: " << _product->GetName() << endl;
        fout << "Производитель: " << _product->GetManufacturer() << endl;
        fout << "Цена: " << _product->GetSalePrice() << endl;
        fout << "Количество: " << _product->GetQuantity() << endl;
    }
}
