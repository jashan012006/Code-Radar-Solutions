#include <stdio.h>

int main() {
    int n, i = 0;
    int binaryNum[32];
    scanf("%d", &n);
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryNum[j]);
    }
    
    return 0;
}
