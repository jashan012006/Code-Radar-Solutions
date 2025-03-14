#include <stdio.h>
#include <stdbool.h>

// Function to check if the array is sorted in ascending order
bool is_sorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false; // Not sorted
        }
    }
    return true; // Sorted
}

int main() {
    int n;

    // User inputs the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];

    // User inputs the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is sorted and print the result
    if (is_sorted(arr, n)) {
        printf("Array is sorted in ascending order.\n");
    } else {
        printf("Array is not sorted in ascending order.\n");
    }

    return 0;
}
