// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Paul M
// Created on: October 2019
// This takes two numbers

#include <iostream>

int main() {
    // variables
    float number1;
    float number2;


    std::cout << "This program compares 2 numbers " << std::endl;
    // input
    std::cout << "Enter a number: ";
    std::cin >> number1;
    std::cout << "Enter another number: ";
    std::cin >> number2;

    // process and output
        if (number1 > number2) {
            std::cout << "" << std::endl;
            std::cout << (number1) <<" is the greater number" << std::endl;
        } else if (number2 > number1) {
            std::cout << "" << std::endl;
            std::cout << (number2) <<" is the greater number" << std::endl;
        } else {
            std::cout << "" << std::endl;
            std::cout << "The 2 numbers are equal" << std::endl;
        }
    }
