#include<stdio.h>

int main() {
    int n, modulus = 0, remainder, temp;
    scanf("%d", &n); // Input the number of elements
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input the array elements
        temp = arr[i]; // Initialize temp with the current array value
        modulus = 0; // Reset modulus for each number
        
        while (temp > 0) {
            remainder = temp % 10; // Get the last digit
            modulus += remainder; // Add it to the sum of digits
            temp /= 10; // Remove the last digit
        }
        
        printf("%d ", modulus); // Print the sum of digits for the current number
    }
    
    return 0;
}