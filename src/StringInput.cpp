/*
 * StringInput.cpp
 *
 *  Created on: Nov 1, 2026
 *      Author: samanthawidell
 */



#include <iostream>
#include <string>

int main() {
    // Display the application title.
    std::cout << "STRING INPUT CONSOLE APPLICATION\n\n";

    // Repeat the string input process three times.
    for (int testNumber = 1; testNumber <= 3; ++testNumber) {
        std::string firstString;
        std::string secondString;
        std::string combinedString;

        std::cout << "Test " << testNumber << " of 3\n";

        // Collect the first string from the user.
        std::cout << "Enter the first string: ";
        std::getline(std::cin, firstString);

        // Collect the second string from the user.
        std::cout << "Enter the second string: ";
        std::getline(std::cin, secondString);

        // Concatenate both strings.
        combinedString = firstString + secondString;

        // Display the concatenated result.
        std::cout << "Concatenated result: "
                  << combinedString << "\n\n";
    }

    std::cout << "All three tests are complete.\n";

    return 0;
}


