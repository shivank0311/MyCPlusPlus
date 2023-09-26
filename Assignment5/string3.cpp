#include <iostream>
#include <string>
using namespace std;

int countWords(const string& str);
int main() {
    string inputString;

    cout << "Enter a string: ";
    getline(cin, inputString);

    int numWords = countWords(inputString);

    cout << "Number of words in the string: " << numWords << endl;

    return 0;
}
int countWords(const string& str) {
    int wordCount = 0;
    int inWord = false;

    for (char c : str) {
        if (c == ' ' || c == '\t' || c == '\n') {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            wordCount++;
        }
    }
    return wordCount;
}
