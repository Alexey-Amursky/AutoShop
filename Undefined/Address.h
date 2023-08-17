/*
#ifndef VOLKSMARKET_ADDRESS_H
#define VOLKSMARKET_ADDRESS_H

#include "../includer.h"

class Address {
private:
    string _city;
    string _street;
    string _home;
    string _appartament;
public:
    Address(const string &city, const string &street, const string &home, const string &appartament) :
            _city(city), _street(street), _home(home), _appartament(appartament) {};

    const string &getCity() const {
        return _city;
    }

    const string &getStreet() const {
        return _street;
    }

    const string &getHome() const {
        return _home;
    }

    const string &getAppartament() const {
        return _appartament;
    }

    Address setCity(const string &city) {
        _city = city;
        return *this;
    }

    Address setStreet(const string &street) {
        _street = street;
        return *this;
    }

    Address setHome(const string &home) {
        _home = home;
        return *this;
    }

    Address setAppartament(const string &appartament) {
        _appartament = appartament;
        return *this;
    }

    void setAddressFull (Address address) {
        address.setCity(_city).setStreet(_street).setHome(_home).setAppartament(_appartament);
    }
};


#endif
*/
