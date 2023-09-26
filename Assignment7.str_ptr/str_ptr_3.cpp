#include <stdio.h>
#include <stdbool.h>

bool isWhiteSpace(char c) {
    return c == ' ' || c == '\t' || c == '\n' || c == '\r';
}

int countWords(const char *str) {
    int wordCount = 0;
    bool inWord = false;

    while (*str) {
        if (isWhiteSpace(*str)) {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            wordCount++;
        }

        str++; // Move the pointer to the next character
    }

    return wordCount;
}

int main() {
    char inputString[1000];

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    int numWords = countWords(inputString);

    printf("Number of words in the string: %d\n", numWords);

    return 0;
}