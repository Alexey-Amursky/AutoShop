#ifndef VOLKSMARKET_MENU_H
#define VOLKSMARKET_MENU_H

#include "../includer.h"

void Menu(){
/*
 * (vector<string> users, vector<string> employees, vector<string> passwords)
    cout << "Enter user name: ";
    string userName;
    cin >> userName;
    cout << "Enter password: ";
    string password;
    cin >> password;

    bool checkUser = false;
    bool checkEmployee = false;
    bool checkPasword = false;

    for (int i = 0; i < users.size(); ++i) {
        if (userName == users[i]){
            checkUser = true;
            for (int j = 0; j < passwords.size(); ++j) {
                if(password == passwords[i]) {
                    checkPasword = true;
                    break;
                }
            }
        } else {
            for (int k = 0; k < employees.size(); ++k) {
                if (userName == employees[k]){
                    checkEmployee = true;
                    for (int l = 0; l < passwords.size(); ++l) {
                        if(password == passwords[i]) {
                            checkPasword = true;
                            break;
                        }
                    }
                } else {
                    cout << "error enter username or pass!" << endl;
                    return;
                }

            }
        }

    }

    system ("cls");

    if (checkUser and checkPasword){
        cout << "Главное меню:" << endl;
        cout << "1. Просмотр каталога" << endl;
        cout << "2. Поиск товара" << endl;
        cout << "3. Подробная информация о товаре" << endl;
        cout << "4. Добавить товар в корзину" << endl;
        cout << "5. Оформить заказ" << endl;
        cout << "0. Выход" << endl;
        cout << "Выберите опцию: ";
    }

    if (checkEmployee and checkPasword){*/
        cout << "Главное меню:" << endl;
        cout << "1. Поиск товаров" << endl;
        cout << "2. Просмотр категорий" << endl;
        cout << "3. Просмотреть подробную информацию о продукте" << endl;
        cout << "4. Добавить товар в базу данных" << endl;
        cout << "5. Добавить клиента в базу данных" << endl;
        cout << "6. Создать заказ" << endl;
        cout << "7. Управление корзиной покупок" << endl;
        cout << "8. Выход" << endl << endl;
        cout << "Ввыберите пункт меню: ";

}


#endif //VOLKSMARKET_MENU_H
