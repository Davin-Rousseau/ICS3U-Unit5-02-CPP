// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Mr. Coxall
// Created on: Oct 2019
// This program uses user defined functions

#include <iostream>

void CalculateArea(int base, int height) {
    // calculate area
    int area;

    // process
    area = (base * height) / 2;

    // output
    std::cout << "The area of the triangle is " << area << "cm^2"
              << std::endl;
}


main() {
    // checks if input is integer, then calls function
    std::string input1;
    std::string input2;
    int baseTriangle;
    int heightTriangle;

    // input
    std::cout << "Enter the base of the triangle (cm): ";
    std::cin >> input1;
    std::cout << "Enter the height of the triangle (cm): ";
    std::cin >> input2;
    std::cout << std::endl;

    try {
        baseTriangle = std::stoi(input1);
        heightTriangle = std::stoi(input2);
        // call functions
        CalculateArea(baseTriangle, heightTriangle);
    } catch(std::invalid_argument) {
        std::cout << "Invalid input";
    }
}
