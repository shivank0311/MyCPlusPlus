#include <stdio.h>
#include <string.h>

void displayBackward(const char *str) {
    // Find the length of the string
    int length = strlen(str);

    // Initialize a pointer to the last character of the string
    const char *ptr = str + length - 1;

    // Iterate through the string in reverse order
    while (ptr >= str) {
        printf("%c", *ptr);
        ptr--; // Move the pointer to the previous character
    }
    printf("\n");
}
int main() {
    char inputString[100];

    printf("Enter a string: ");
    scanf("%s", inputString);

    printf("String displayed backward: ");
    displayBackward(inputString);

    return 0;
}