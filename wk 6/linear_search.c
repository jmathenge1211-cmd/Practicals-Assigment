#include <stdio.h>

// FUNCTION: linearSearch
// Search for a target value in an array
int linearSearch(int arr[], int size, int target) {

    // Loop through each element
    for (int i = 0; i < size; i++) {

        // Compare current element with target
        if (arr[i] == target) {

            // Return index if found
            return i;
        }
    }

    // Return -1 if not found
    return -1;
}

// MAIN FUNCTION
int main() {

    // Declare and initialise an array
    int numbers[8] = {15, 42, 7, 89, 23, 56, 11, 74};

    // Calculate array size
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Variable for target
    int target;

    // Display array contents
    printf("Array contents: ");

    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    // Ask user for number
    printf("Enter a number to search: ");
    scanf("%d", &target);

    // Call linearSearch function
    int position = linearSearch(numbers, size, target);

    // Check if found
    if (position != -1) {

        printf("Element found at index: %d\n", position);

    } else {

        printf("Element not found in the array.\n");
    }

    return 0;
}