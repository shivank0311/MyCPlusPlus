#include <stdio.h>

// Inline function to calculate square
inline int square_inline(int x) {
    return x * x;
}

// Macro to calculate square
#define SQUARE_MACRO(x) ((x) * (x))

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int numbers[n]; // Declare an array to hold the numbers
    int squares[n]; // Declare an array to hold the squares

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Calculate squares using inline function
    printf("Squares using inline function:\n");
    for (int i = 0; i < n; i++) {
        squares[i] = square_inline(numbers[i]);
        printf("%d ", squares[i]);
    }
    printf("\n");

    // Calculate squares using macro
    printf("Squares using macro:\n");
    for (int i = 0; i < n; i++) {
        squares[i] = SQUARE_MACRO(numbers[i]);
        printf("%d ", squares[i]);
    }
    printf("\n");

    return 0;
}
