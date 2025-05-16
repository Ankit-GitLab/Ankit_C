#include <stdio.h>

int main() {
    int arr[100], n, i, target, found = 0;

    // Input the size of the array
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search
    printf("Enter the element to find: ");
    scanf("%d", &target);

    // Search for the element
    for(i = 0; i < n; i++) {
        if(arr[i] == target) {
            printf("Element %d found at position (index) %d\n", target, i);
            found = 1;
            break;
        }
    }

    // If not found
    if(!found) {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
