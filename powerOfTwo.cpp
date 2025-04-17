// Copyright 2025 Xiaohan All rights reserved.
// Created by: Xiaohan
// Created on: April 16, 2025
// This program calculates the square.

#include <iostream>
#include <string>

int main() {
    // Declare variable to store user input
    std::string userInputStr;

    // Ask the user to enter a whole number
    std::cout << "Enter a whole number: ";
    std::cin >> userInputStr;

    try {
        int userInput;
        // Convert to integer
        userInput = std::stoi(userInputStr);
        // Check if the user entered a negative number
        if (userInput < 0) {
            std::cout
            << "Please enter a non-negative whole number." << std::endl;
        } else {
            // Process & output: loop from 0 to user_input (inclusive)
            for (int counter = 0; counter <= userInput; counter++) {
                // Display the number and its square
                std::cout << counter << " ^ 2 = "
                << counter * counter << std::endl;
            }
        }
    } catch (std::invalid_argument const &err) {
        // catches errors if user enter invalid things
        std::cout << "Invalid input. Please enter a positive integer.";
    }
    // Thank the user after the program runs
    std::cout << "Thank you for using!" << std::endl;
}
