#include <iostream>
#include <string>

int main() {
    std::string myString = "Hello, World!";
    char letterToCheck = 'z'; // The letter you want to check for

    // Use the find() function to search for the letter in the string
    size_t found = myString.find(letterToCheck);

    if (found == std::string::npos) {
        std::cout << "The letter '" << letterToCheck << "' does not exist in the string." << std::endl;
    } else {
        std::cout << "The letter '" << letterToCheck << "' exists in the string at position " << found << std::endl;
    }

    return 0;
}
