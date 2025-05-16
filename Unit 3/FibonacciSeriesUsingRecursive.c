#include <stdio.h>

// Recursive function to return nth Fibonacci number
int fibonacci(int n) {
    if(n == 0)
        return 0;  // Base case
    else if(n == 1)
        return 1;  // Base case
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive call
}

int main() {
    int i, n;

    // Ask user for number of terms
    printf("Enter the number of terms in Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    for(i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));  // Call the recursive function
    }

    printf("\n");
    return 0;
}
