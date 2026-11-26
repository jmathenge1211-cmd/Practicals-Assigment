#include <stdio.h>

// FUNCTION 1: Simple Recursion
int factorialRecursive(int n) {

    // Base case
    if (n <= 1) {
        return 1;
    }

    // Recursive case
    return n * factorialRecursive(n - 1);
}

// FUNCTION 2: Tail Recursion
int factorialTailHelper(int n, int accumulator) {

    // Base case
    if (n <= 1) {
        return accumulator;
    }

    // Tail recursive case
    return factorialTailHelper(n - 1, n * accumulator);
}

// Wrapper function
int factorialTail(int n) {
    return factorialTailHelper(n, 1);
}

// MAIN FUNCTION
int main() {

    int num;

    // Ask user to enter a number
    printf("Enter a number to calculate factorial: ");
    scanf("%d", &num);

    // Validate input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    // Simple recursion
    printf("\nUsing simple recursion:\n");
    printf(" %d! = %d\n", num, factorialRecursive(num));

    // Tail recursion
    printf("\nUsing tail recursion:\n");
    printf(" %d! = %d\n", num, factorialTail(num));

    // Comparison
    printf("\n--- Comparison ---\n");
    printf("Simple recursion: Clear, matches mathematical definition.\n");
    printf("Tail recursion: More efficient for large n (compiler optimization).\n");

    return 0;
}