#include <stdio.h>

// Pass by value
void swapByValue(int a, int b) {
    printf("Inside function - Before swap: a = %d, b = %d\n", a, b);

    int temp = a;
    a = b;
    b = temp;

    printf("Inside function - After swap: a = %d, b = %d\n", a, b);
}

// Swap using pointers
void swapByPointer(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10;
    int y = 20;

    printf("Before calling swapByValue:\n");
    printf("x = %d, y = %d\n", x, y);

    swapByValue(x, y);

    printf("After calling swapByValue:\n");
    printf("x = %d, y = %d\n", x, y);

    printf("\nSwapping using pointers:\n");
    swapByPointer(&x, &y);

    printf("x = %d, y = %d\n", x, y);

    return 0;
}