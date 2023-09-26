#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[30];
    char ptr[20];

    cout << "Enter the first string: ";
    cin.getline(str, sizeof(str));

    cout << "Enter the second string: ";
    cin.getline(ptr, sizeof(ptr));

    strcat(str, ptr); // Concatenate the second string to the first

    cout << "Concatenated string: " << str << endl;
    cout << "Length of the concatenated string: " << strlen(str) << endl;

    return 0;
}
