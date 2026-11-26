#include <stdio.h>

// GLOBAL VARIABLE
// Accessible by all functions
int globalCounter = 100;

// FUNCTION: displayGlobal
void displayGlobal() {
    printf("Inside displayGlobal: globalCounter = %d\n", globalCounter);
}

// FUNCTION: modifyGlobal
void modifyGlobal() {
    globalCounter = 500;
    printf("Inside modifyGlobal: globalCounter changed to %d\n", globalCounter);
}

// FUNCTION: localDemo
void localDemo() {
    // Local variable shadows the global variable
    int globalCounter = 999;

    printf("Inside localDemo: globalCounter = %d\n", globalCounter);
}

// MAIN FUNCTION
int main() {
    // LOCAL VARIABLE
    int localCounter = 50;

    printf("In main: globalCounter = %d\n", globalCounter);
    printf("In main: localCounter = %d\n", localCounter);

    // Call functions
    displayGlobal();
    modifyGlobal();
    localDemo();

    // Check global variable after modification
    printf("Back in main: globalCounter = %d\n", globalCounter);

    return 0;
}