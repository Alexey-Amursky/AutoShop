#ifndef VOLKSMARKET_FUNCTIONS_H
#define VOLKSMARKET_FUNCTIONS_H

#include "../includer.h"
#include "Product.h"
#include "Date.h"
#include "Order.h"
#include "../Undefined/OrderBuilder.h"
#include "Menu.h"


Product SearchProduct (Products products){
    Product* product;

    for (auto item : products) {
        if (item == product){
            return *product;
        } else {
            cerr << "Товар не найден!" << endl;
        }
    }


}

int CountElementInFile (string path) {
    ifstream fin(path);
    int count;

    if(!fin.is_open()) {
        cout << "Не верно указан путь к файлу!";
    } else {
        fin >> count;
    }
    fin.close();
    return count;
}

void ReadProductsFromFile(Product* product, string path) {
    ifstream fin(path);

    int count, quantity;
    double costPrice, salePrice;
    string nameProduct, manufacturer;

    if(!fin.is_open()) {
        cerr << "Не удалось открыть файл для чтения, проверьте имя файла" << endl;
    }
    else {
        fin >> count;
        for (int i = 0; i < count; ++i) {
            fin >> nameProduct;
            fin >> manufacturer;
            fin >> costPrice;
            fin >> salePrice;
            fin >> quantity;
            product[i].SetParametres(nameProduct, manufacturer, costPrice, salePrice, quantity);
        }
    }
    fin.close();
}

/*
void SaveProductToFile(Products products, const string& path ) {

    ofstream fout(path);

    if (!fout.is_open()) {
        cerr << "Не удалось открыть файл для записи." << endl;
        return;
    }

    for (auto product : products) {
        fout << product->getName() << "|"
             << product->getManufacturer() << "|"
             << product->getCostPrice() << "|"
             << product->getSalePrice() << "|"
             << product->getQuantity() << endl;
    }

    fout.close();
}
*/



#endif //VOLKSMARKET_FUNCTIONS_H
