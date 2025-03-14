#include <stdio.h>
#include <stdbool.h>
bool is_sorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (is_sorted(arr, n)) {
        printf("Sorted");
    } else {
        printf("Not Sorted");
    }

    return 0;
}
