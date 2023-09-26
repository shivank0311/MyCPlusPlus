#include <iostream>
#include <string>
using namespace std;

int findSubstring(const string& mainString, const string& substring);
int main() {
    string mainString, substring;

    cout << "Enter the main string: ";
    getline(cin, mainString);

    cout << "Enter the substring to search for: ";
    getline(cin, substring);

    int position = findSubstring(mainString, substring);

    if (position != -1) {
        cout << "Substring found at position: " << position << endl;
    } else {
        cout << "Substring not found in the main string." << endl;
    }
    return 0;
}
int findSubstring(const string& mainString, const string& substring) {
    size_t found = mainString.find(substring);

    if (found != string::npos) {
        return static_cast<int>(found); // Convert size_t to int for position
    } else {
        return -1; // Return -1 if the substring is not found
    }
}

