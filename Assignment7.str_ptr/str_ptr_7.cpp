#include <iostream>
#include <cstring>
using namespace std;

int findSubstring(const char *str, const char *substring);
int main() {
    char mainString[100];
    char substring[50];

    cout << "Enter a main string: ";
    cin.getline(mainString, sizeof(mainString));

    cout << "Enter a substring to search for: ";
    cin.getline(substring, sizeof(substring));

    int position = findSubstring(mainString, substring);

    if (position != -1) {
        cout << "Substring found at position: " << position << endl;
    } else {
        cout << "Substring not found in the main string." << endl;
    }

    return 0;
}
int findSubstring(const char *str, const char *substring) {
    int strLen = strlen(str);
    int subLen = strlen(substring);

    for (int i = 0; i <= strLen - subLen; i++) {
        const char *strPtr = str + i;
        const char *subPtr = substring;

        while (*subPtr && *subPtr == *strPtr) {
            subPtr++;
            strPtr++;
        }
        if (*subPtr == '\0') {
            // Substring found, return its starting position
            return i;
        }
    }
    // Substring not found
    return -1;
}

