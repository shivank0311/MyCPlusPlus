#include <iostream>
#include <cstring>
using namespace std;

int isPalindrome(const char str[], int len);
int main() {
    char str[20];

    cout << "Enter the input string: " << endl;
    cin.getline(str, sizeof(str));

    int len = strlen(str);

    if (isPalindrome(str, len)) {
        cout << "This string is a palindrome." << endl;
    } else {
        cout << "This string is not a palindrome." << endl;
    }

    return 0;
}   //condition for checking string is palindrone or not
int isPalindrome(const char str[], int len) {
    int start = 0;
    int end = len - 1;
    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;  //to move pointer towards each other
        end--;
    }
    return true;
}


