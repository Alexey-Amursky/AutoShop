#include "AutoShop.h"

int main() {
    string pathProductForRead = {"Files/ProductsForRead.csv"};
    string pathProductForWrite = {"Files/ProductForWrite.csv"};
    string pathOrderHistory = {"Files/OrderHistory.csv"};
    string pathCheck = {"Files/Check.txt"};
    Products products;
    int menu;


    while(menu != 0){
        Menu();
        cin >> menu;
        system("cls");
        system("pause");
        system("cls");
        switch (menu){
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;
            case 0:
                cout << "Программа закрыта!" << endl;
                break;

            default:
                system("cls");
                cerr << "Ошибка ввода, повторите попытку!" << endl;
                system("pause");
                system("cls");
        }


    }







    products.push_back(engine);


    return 0;
}
