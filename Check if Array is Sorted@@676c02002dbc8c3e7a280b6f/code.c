#include <stdio.h>
#include <stdbool.h>

// Function to check if the array is sorted
const char* is_sorted(int arr[], int n) {
    bool ascending = true;
    bool descending = true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            ascending = false;
        }
        if (arr[i] < arr[i + 1]) {
            descending = false;
        }
    }

    if (ascending) {
        return "Array is sorted in ascending order.";
    } else if (descending) {
        return "Array is sorted in descending order.";
    } else {
        return "Array is unsorted.";
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("%s\n", is_sorted(arr, n));

    return 0;
}
