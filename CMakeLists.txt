cmake_minimum_required(VERSION 3.26)
project(VolksMarket)

set(CMAKE_CXX_STANDARD 17)

add_executable(VolksMarket main.cpp
        includer.h
        Library/Product.h
        Library/Menu.h
        Undefined/ProductBuilder.h
        Library/Order.h
        Undefined/Client.h
        Undefined/Date.h
        Undefined/Address.h
        Undefined/OrderBuilder.h
        Library/Functions.h
        AutoShop.h
        Library/Product.cpp
        Library/Order.cpp
)
