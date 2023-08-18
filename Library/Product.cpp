#include "Product.h"

Product::Product() {
    _id = 0;
    _name = "";
    _manufacturer = "";
    _costPrice = 0;
    _salePrice = 0;
    _quantity = 0;
};

Product::Product(int id, const string &name, const string &manufacturer, double costPrice, double salePrice, int quantity) :
_id(id), _name(name), _manufacturer(manufacturer), _costPrice(costPrice), _salePrice(salePrice), _quantity(quantity) {};

Product::~Product() {}

Product *Product::Clone(Product *product) {
    return new Product(_id,_name, _manufacturer, _costPrice,  _salePrice,  _quantity);
}

void Product::PrintToConsole() {
    if(_name != ""){
        cout << "Артикуль: " << _id << endl;
        cout << "Товар: " << _name << endl;
        cout << "Производитель: " << _manufacturer << endl;
        cout << "Цена закупки: " << _costPrice << endl;
        cout << "Цена продажи: " << _salePrice << endl;
    }
}

void Product::SetParametres(int id, string name, string manufacturer, double costPrice, double salePrice, int quantity) {
    _id = id;
    _name = name;
    _manufacturer = manufacturer;
    _costPrice = costPrice;
    _salePrice = salePrice;
    _quantity = quantity;
}

void Product::AddToFileForRead(string path) {
    ofstream fout(path, ios::app);

    if(!fout.is_open()){
        cerr << "Ошибка открытия файла!" << endl;
    } else {
        fout << "Артикуль: " << _id << endl;
        fout << "Товар: " << _name << endl;
        fout << "Производитель: " << _manufacturer << endl;
        fout << "Цена закупки: " << _costPrice << endl;
        fout << "Цена продажи: " << _salePrice << endl;
        fout << "Колличество: " << _quantity << endl;
        fout << "_____________________________________________" << endl;
    }
    fout.close();
}

void Product::AddToFileForWrite(string path) {
    ofstream fout(path, ios::app);

    if(!fout.is_open()){
        cerr << "Ошибка открытия файла!" << endl;
    } else {
        fout << _id << endl;
        fout << _name << endl;
        fout << _manufacturer << endl;
        fout << _costPrice << endl;
        fout << _salePrice << endl;
        fout << _quantity << endl;
    }
    fout.close();
}