#ifndef VOLKSMARKET_FILEMANAGER_H
#define VOLKSMARKET_FILEMANAGER_H

#include "../includer.h"
#include "Product.h"

void SaveProductToFile(Products products, const string& path ) {

    ofstream fout(path);

    if (!fout.is_open()) {
        cerr << "�� 㤠���� ������ 䠩� ��� �����." << endl;
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
           cerr << "�� 㤠���� ������ 䠩� ��� �⥭��, �஢���� ��� 䠩��" << endl;
       }
       else {
           string line;
           while (getline(fin, line, '|')) {
               istringstream iss(line);

               cout << "��������: " << iss.str() << endl
                    << "�ந�����⥫�: " << iss.str() << endl
                    << "�⮨����� ���㯪�: " << iss.str() << endl
                    << "�⮨����� �த���: " << iss.str() << endl
                    << "�������⢮: " << iss.str() << endl;
           }
       }
    }
    fin.close();
}*/

#endif
