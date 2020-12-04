// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Nov 2020
// This program calculates length of triangular prism base side
//     where the user gets to enter the length, surface area and height in mm

#include <iostream>
#include <cmath>

int main() {
    // This program calculates length of triangular prism base side

    int length;
    int width;

    // input
    std::cout << "Enter the length: ";
    std::cin >> length;
    std::cout << "Enter the width: ";
    std::cin >> width;

    // process
    if (length == width & length > 0 & width > 0) {
        // output
        std::cout << "It is a square.";
    } else {
        std::cout << "It is not a square.";
    }
}
