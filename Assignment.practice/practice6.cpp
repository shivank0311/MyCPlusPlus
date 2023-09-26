#include <iostream>
#include <string>

int main() {
    std::string inputString, reversedString;

    // Input the string
    std::cout << "Enter a string: ";
    getline(std::cin, inputString);

    int length = inputString.length();

    // Reverse the string
    for (int i = length - 1; i >= 0; --i) {
        reversedString += inputString[i];
    }

    // Display the reversed string
    std::cout << "Reversed string: " << reversedString << std::endl;

    return 0;
}
