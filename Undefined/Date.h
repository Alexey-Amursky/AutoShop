/*
#ifndef VOLKSMARKET_DATE_H
#define VOLKSMARKET_DATE_H

#include "../includer.h"

class Date {
private:
    int _day = 0;
    int _month = 0;
    int _year = 0;
public:
    Date() = default;
    Date(int day, int month, int year) : _day(day), _month(month), _year(year) {};

    int GetDay() const {
        return _day;
    }

    int GetMonth() const {
        return _month;
    }

    int GetYear() const {
        return _year;
    }

    Date SetDay(int day) {
        _day = day;
        return *this;
    }

    Date SetMonth(int month) {
        _month = month;
        return *this;
    }

    Date SetYear(int year) {
        _year = year;
        return *this;
    }

    void ToString() {
        cout << to_string(_day) << "." << to_string(_month) << "." << to_string(_year);
    }
};


#endif //VOLKSMARKET_DATE_H
*/
