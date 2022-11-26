// Copyright (c) 2022 Johanna Liu All rights reserved
//
// Created by: Johanna Liu
// Created on: Nov 2022
// This program is converts c to f

#include <iostream>
#include <string>

void Temperature() {
    std::string strCelsius;
    int intCelsius;
    double fahrenheit;

    // input
    std::cout << "This program converts celsius to fahrenheit." << std::endl;
    std::cout << "Enter degrees in celsius: ";
    std::cin >> strCelsius;

    // process and output
    try {
        intCelsius = std::stoi(strCelsius);
        fahrenheit = (9.0 / 5) * intCelsius + 32;
        std::cout << intCelsius << "°C is equal to " << fahrenheit << "°F.";
    } catch (std::invalid_argument) {
        std::cout << "Invalid Integer.";
    }
    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}
int main() {
    // this function just calls othyer functions

    // call functions
    Temperature();
}
