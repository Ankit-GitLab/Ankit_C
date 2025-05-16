#include <stdio.h>

// Function to swap using pointers (call by reference)
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);  // Passing address (call by reference)
    printf("After swap: x = %d, y = %d\n", x, y);

    return 0;
}
