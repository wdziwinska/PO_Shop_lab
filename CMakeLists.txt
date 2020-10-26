cmake_minimum_required(VERSION 3.17)
project(Shop_l)

set(CMAKE_CXX_STANDARD 20)

add_executable(Shop_l main.cpp Product.h Milk.cpp Milk.h Stock.h Shop.h Cheese.cpp Cheese.h UserInterface.h EmptyProduct.cpp EmptyProduct.h)