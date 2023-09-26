#include <stdio.h>

int stringLength(const char *str) {
    int length = 0;

    // Iterate through the string using a pointer until we reach the null terminator '\0'
    while (*str != '\0') {
        length++;
        str++; // Move the pointer to the next character
    }

    return length;
}

int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    int length = stringLength(inputString);

    printf("Length of the string: %d\n", length);

    return 0;
}