#ifndef VOLKSMARKET_FILEMANAGER_H
#define VOLKSMARKET_FILEMANAGER_H

#include "../includer.h"
#include "Product.h"

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

/*void ReadAndPrintProductsFromFile(const string& path) {

    ifstream fin(path);

    while(!fin.is_open()) {

       if(!fin.is_open()) {
           cerr << "Не удалось открыть файл для чтения, проверьте имя файла" << endl;
       }
       else {
           string line;
           while (getline(fin, line, '|')) {
               istringstream iss(line);

               cout << "Название: " << iss.str() << endl
                    << "Производитель: " << iss.str() << endl
                    << "Стоимость закупки: " << iss.str() << endl
                    << "Стоимость продажи: " << iss.str() << endl
                    << "Колличество: " << iss.str() << endl;
           }
       }
    }
    fin.close();
}*/

#endif
