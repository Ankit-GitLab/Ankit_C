#include <stdio.h>

int main() {
    char str[100];   // Array to store the string
    int i, length = 0;

    // Ask user to enter a string
    printf("Enter a string: ");
    scanf("%s", str);  // Read string (no spaces)

    // Calculate length of string manually
    while (str[length] != '\0') {
        length++;
    }

    // Print string in reverse
    printf("Reversed string: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
