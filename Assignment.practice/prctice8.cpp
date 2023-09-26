#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char firstString[100];
    char secondString[100];

    // Input the first string
    cout << "Enter the first string: ";
    cin.getline(firstString, sizeof(firstString));

    // Input the second string
    cout << "Enter the second string: ";
    cin.getline(secondString, sizeof(secondString));

    // Find the length of the first string
    int firstStringLength = strlen(firstString);

    // Use pointers to concatenate the second string to the first string
    char *firstPtr = firstString + firstStringLength;
    const char *secondPtr = secondString;

    while (*secondPtr) {
        *firstPtr = *secondPtr;
        firstPtr++;
        secondPtr++;
    }

    // Null-terminate the concatenated string
    *firstPtr = '\0';

    // Print the concatenated string
    cout << "Concatenated string: " << firstString << endl;

    return 0;
}
