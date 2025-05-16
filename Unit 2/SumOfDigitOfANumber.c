#include <stdio.h>

int main() {
    int num, digit, sum = 0;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Loop to extract and add digits
    while(num != 0) {
        digit = num % 10;     // Get the last digit
        sum = sum + digit;    // Add it to the sum
        num = num / 10;       // Remove the last digit
    }

    // Display the result
    printf("Sum of digits = %d\n", sum);

    return 0;
}
