cmake_minimum_required(VERSION 3.26)
project(VolksMarket)

set(CMAKE_CXX_STANDARD 17)

add_executable(VolksMarket main.cpp
        includer.h
        Library/Product.h
        Library/Menu.h
        Library/ProductBuilder.h
        Library/FileManager.h
        Library/Order.h
        Undefined/Client.h
        Library/Date.h
        Undefined/Address.h
        Library/OrderBuilder.h
        Library/Functions.h
        AutoShop.h
)
