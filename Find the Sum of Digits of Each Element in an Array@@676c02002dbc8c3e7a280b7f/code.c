#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, modulus = 0, remainder, temp;
    scanf("%d", &n); 
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
        temp = abs(arr[i]);  
        modulus =0
        while (temp > 0) {
            remainder = temp % 10; 
            modulus += remainder; 
            temp /= 10; 
        }
        
        printf("%d ", modulus); 
    }
    
    return 0;
}