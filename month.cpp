// Copyright (c) 2022. Daniel Momoh HS All rights reserved.
// usr/bin/env c++
// Created by : Daniel Momoh
// Created on : Oct 2022
#include <iostream>

int main() {
    int month;
    std::cout << "Enter the number for the month : ";
    std::cin >> month;
    switch (month) {
        case '1':
            std::cout << month << "is January!";
            break;
    case '2':
            std::cout << month << "is February!";
            break;
    case '3':
            std::cout << month << "is March!";
            break;
    case '4':
            std::cout << month << "is April!";
            break;
    case '5':
            std::cout << month << "is May!";
            break;
    case '6':
            std::cout << month << "is June!";
            break;
    case '7':
            std::cout << month << "is July!";
            break;
    case '8':
            std::cout << month << "is August!";
            break;
    case '9':
            std::cout << month << "is September!";
            break;
    case '10':
            std::cout << month << "is October!";
            break;
    case '11':
            std::cout << month << "is November!";
            break;
    case '12':
            std::cout << month << "is December!";
            break;
    default :
            std::cout << "This is not a month";
    }
}
