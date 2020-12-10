// Copyright (c) 2020 Ryan Walsh All rights reserved
//
// Created by Ryan Walsh
// Created on December 9 2020
// this program tells you if the year entered is a leap year

#include <iostream>
#include <string>

int main() {
    // this program tells you if the year entered is a leap year
    std::string year_string;
    int year;

    // input
    std::cout << "Enter a year please:";
    std::cin >> year_string;
    std::cout << "" << std::endl;


    // process and output
    try {
        year = std::stoi(year_string);
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                if (year % 400 == 0) {
                    std::cout << year << " is a leap year." << std::endl;
               } else {
                    std::cout << year << " is a common year." << std::endl;
               }
            } else {
                std::cout << year << " is a leap year." << std::endl;
            }
    }   else {
            std::cout << year << " is a common year." << std::endl;
    }
    }catch (std::invalid_argument) {
        std::cout << "That was not a year. Try again.";
    }
}
