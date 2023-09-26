#include <iostream>
#include <cstring> // For strlen()
using namespace std;

int comparison(const char str1[], const char str2[]);

int main() {
    char str1[30];
    char str2[20];

    cout << "Enter the first string: ";
    cin.getline(str1, sizeof(str1));

    cout << "Enter the second string: ";
    cin.getline(str2, sizeof(str2));

    int result = comparison(str1, str2);

    if (result < 0) {
        cout << "The first string is less than the second string." << endl;
    } else if (result == 0) {
        cout << "The two strings are equal." << endl;
    } else {
        cout << "The first string is greater than the second string." << endl;
    }

    return 0;
}

int comparison(const char str1[], const char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] < str2[i]) {
            return -1;
        } else if (str1[i] > str2[i]) {
            return 1;
        }
        i++;
    }

    // If we reach here, the strings are either equal or one is a prefix of the other
    if (strlen(str1) < strlen(str2)) {
        return -1;
    } else if (strlen(str1) > strlen(str2)) {
        return 1;
    }

    return 0; // Strings are equal
}

