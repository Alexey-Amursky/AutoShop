#include "includer.h"
#include "AutoShop.h"




int main() {

    string path = "D:\\Programming projects\\C++ projects\\VolksMarket\\Files\\Products.csv";

    Products products;

    auto engine = new Product("Chassi", "DarsMotors", 100, 200, 3);

    products.push_back(engine);




    SaveProductToFile(products, path);

   // ReadAndPrintProductsFromFile(path);

    return 0;
}
