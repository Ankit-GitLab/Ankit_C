#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)  // Base case: factorial of 0 or 1 is 1
        return 1;
    else
        return n * factorial(n - 1);  // Recursive call
}

int main() {
    int num;

    // Ask user to enter a number
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);

    // Check for negative input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Call recursive function and print result
        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}
