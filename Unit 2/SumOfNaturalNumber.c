#include <stdio.h>

int main() {
    int sum = 0;            // Variable to store the total sum
    int i;                  // Loop counter

    // Loop from 1 to 20
    for(i = 1; i <= 20; i++) {
        sum = sum + i;      // Add current number to sum
    }

    // Display the result
    printf("The sum of the first 20 natural numbers is: %d\n", sum);

    return 0;
}
