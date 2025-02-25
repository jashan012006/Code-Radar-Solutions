#include <stdio.h>

int main() {
    int n, i = 0;
    int binaryNum[32]; // Array to store binary number
    
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    
    // Process to convert decimal to binary
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    
    printf("Binary representation: ");
    // Printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    
    return 0;
}
