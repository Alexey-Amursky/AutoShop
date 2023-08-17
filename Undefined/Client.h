/*
#ifndef VOLKSMARKET_CLIENT_H
#define VOLKSMARKET_CLIENT_H

#include "../includer.h"


class Client {
private:
    string _firstName;
    string _lastName;
    string _number;
public:
    Client(const string &firstName, const string &lastName, const string &number) :
     _firstName(firstName), _lastName(lastName), _number(number) {};

    const string &getFirstName() const {
        return _firstName;
    }

    const string &getLastName() const {
        return _lastName;
    }

    const string &getNumber() const {
        return _number;
    }

    Client setFirsname (string name){
        _firstName = name;
        return *this;
    }

    Client setLastName(const string &lastName) {
        _lastName = lastName;
        return *this;
    }

    Client setNumber(const string &number) {
        _number = number;
        return *this;
    }
};


#endif //VOLKSMARKET_CLIENT_H
*/
